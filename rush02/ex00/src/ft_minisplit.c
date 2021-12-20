/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minisplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:27:21 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:10:05 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_take_number(char *str)
{
	int		i;
	char	*nb;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	nb = malloc(sizeof(char) * (i + 1));
	if (!(nb))
		return (0);
	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb[i] = str[i];
		i++;
	}
	nb[i] = '\0';
	return (nb);
}

char	*ft_take_word(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*word;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	k = ft_strlen(str);
	while (str[k] == ' ')
		k--;
	word = malloc(k - i + 1);
	if (!word)
		return (NULL);
	j = 0;
	while (str[i] && i < k)
	{
		word[j] = str[i++];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_minisplit(char **line)
{
	char	**dico;
	int		j;
	int		i;

	j = 0;
	i = 0;
	dico = malloc(sizeof(char *) * ((ft_lentab(line) * 2) + 2));
	if (!(dico))
		return (0);
	while (line[i])
	{
		dico[j] = ft_take_number(line[i]);
		dico[j + 1] = ft_take_word(line[i]);
		j = j + 2;
		i++;
	}
	dico [j] = 0;
	dico[j + 1] = 0;
	return (dico);
}
