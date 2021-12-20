/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:43:25 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:04:05 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_find_dico(char *nb, char **dico)
{
	int	i;
	int	j;

	j = 0;
	while (dico[j])
	{
		i = 0;
		if (nb[i] == dico[j][i] && nb [i])
		{
			while (nb[i] == dico[j][i] && nb[i])
			{
				i++;
			}
			if (dico[j][i] == '\0' && nb[i] == '\0')
				return (j);
		}
		j = j + 2;
	}
	return (0);
}

void	ft_printunit(int j, char **dico)
{
	int		u;
	char	*unitnb;

	u = j * 3 - 3;
	unitnb = malloc(sizeof(char) * (u + 2));
	if (!unitnb)
		return ;
	unitnb[0] = '1';
	unitnb[j + 1] = '\0';
	while (u > 0)
	{
		unitnb[u] = '0';
		u--;
	}
	if (j != 1)
		ft_putstr(dico[ft_find_dico(unitnb, dico) + 1]);
	free(unitnb);
}

void	ft_print_number(char **dico, char **number_cut)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	j = 0;
	k = ft_lentab(number_cut);
	while (number_cut[j])
	{
		if (ft_written(number_cut[j], dico) == 1)
		{
			if (k != 0)
			{
				ft_printunit(k, dico);
			}
		}
		k--;
		j++;
	}
}
