/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kissa <kissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:45:16 by kissa             #+#    #+#             */
/*   Updated: 2021/08/22 21:28:08 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	only_zero(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] == '0')
	{	
		i++;
		if (nb[i] == '\0')
			return (1);
	}
	return (0);
}

void	ft_freetab2(char **str1, char **str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		free(str1[i]);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		free(str2[i]);
		i++;
	}
	free(str1);
	free(str2);
}

void	ft_argc2(char **argv)
{
	char	**dico;
	char	*nb;
	char	**tabnb;

	dico = ft_parsing("numbers.dict");
	nb = ft_atoa(argv[1]);
	if (dico == 0)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	if (nb == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	tabnb = ft_split(ft_formatted_number(nb), " ");
	if (only_zero(nb))
	{
		ft_putstr(tabnb[ft_find_dico("0", dico) + 1]);
		return ;
	}
	ft_print_number(dico, tabnb);
	ft_freetab2(dico, tabnb);
}

void	ft_argc3(char **argv)
{
	char	**dico;
	char	*nb;
	char	**tabnb;

	dico = ft_parsing(argv[2]);
	nb = ft_atoa(argv[1]);
	if (dico == 0)
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	if (nb == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	tabnb = ft_split(ft_formatted_number(nb), " ");
	if (only_zero(nb))
	{
		ft_putstr(tabnb[ft_find_dico("0", dico) + 1]);
		return ;
	}
	ft_print_number(dico, tabnb);
	ft_freetab2(dico, tabnb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_argc2(argv);
	else if (argc == 3)
		ft_argc3(argv);
	else
		write(1, "Error\n", 6);
	return (0);
}
