/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_3_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:15:48 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:25:33 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_find(char **dico, char *nb)
{
	int	i;
	int	j;

	j = 0;
	while (dico[j])
	{
		i = 0;
		if (nb[i] == dico[j][i] && nb[i])
		{
			while (nb[i] == dico[j][i] && nb[i])
				i++;
			if (dico[j][i] == '\0' && nb[i] == '\0')
				return (j + 1);
		}
		j = j + 2;
	}
	return (0);
}

char	*ft_strcpy(char src)
{
	char	*str;

	str = malloc(3);
	str[2] = '\0';
	str[1] = '0';
	str[0] = src;
	return (str);
}

int	ft_written(char *a, char **dico)
{
	int	i;
	int	nbr;

	nbr = ft_atoi(a);
	i = 0;
	if (nbr != 0)
	{
		if (nbr / 100 > 0)
		{
			ft_putstr(dico[ft_find(dico, ft_atoa(ft_itoa(nbr / 100)))]);
			ft_putstr(dico[ft_find(dico, "100")]);
			nbr = nbr % 100;
		}
		if (ft_find(dico, ft_atoa(ft_itoa(nbr))) != 0 && nbr != 0)
			ft_putstr(dico[ft_find(dico, ft_atoa(ft_itoa(nbr)))]);
		else if (nbr != 0)
		{
			if (nbr > 9)
				ft_putstr(dico[ft_find(dico, ft_atoa(ft_itoa(nbr / 10 * 10)))]);
			if (nbr / 10 != 0)
				ft_putstr(dico[ft_find(dico, ft_atoa(ft_itoa(nbr % 10)))]);
		}
		return (1);
	}
	return (0);
}
