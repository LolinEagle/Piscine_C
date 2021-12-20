/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:28:27 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:05:20 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 4096

void	ft_free_tab(char **line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		free(line[i]);
		i++;
	}
	free(line);
}

char	*ft_getdico(char *namefile)
{
	int		fd;
	char	*buff;
	int		ret;
	int		n;

	buff = malloc (BUF_SIZE + 1);
	if (!buff)
		return (NULL);
	fd = open(namefile, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ret = read(fd, buff, BUF_SIZE);
	buff[ret] = '\0';
	n = close(fd);
	if (n == -1)
	{
		return (0);
	}
	return (buff);
}

int	ft_check_line(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] <= '9' && str[0] >= '0'))
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	while (str[i] == ' ')
		i++;
	if (!(str[i++] == ':'))
		return (0);
	while (str[i] >= ' ' && str[i] <= '~')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

char	**ft_parsing(char *namefile)
{
	char	*buff;
	char	**line;
	char	**dico;
	int		i;

	i = 0;
	buff = ft_getdico(namefile);
	line = ft_split(buff, "\n");
	free(buff);
	while (line[i])
	{
		if (ft_check_line(line[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	dico = ft_minisplit(line);
	ft_free_tab(line);
	return (dico);
}
