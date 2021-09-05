/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:00:21 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/26 13:25:59 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_error(char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	decimal_size(int decimal, int size)
{
	int	i;

	if (!decimal)
		return (1);
	i = 0;
	while (decimal != 0)
	{
		decimal = decimal / size;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				i;
	int				n;
	unsigned int	ibase;
	char			*res;

	if (ft_base_error(base_from) || ft_base_error(base_to))
		return (NULL);
	n = 0;
	if (ft_atoi_base(nbr, base_from) < 0)
		n = 1;
	if (ft_atoi_base(nbr, base_from) < 0)
		ibase = -ft_atoi_base(nbr, base_from);
	else
		ibase = ft_atoi_base(nbr, base_from);
	i = decimal_size(ibase, ft_strlen(base_to)) + n;
	res = malloc (sizeof(char) * i + 1);
	res[i--] = '\0';
	while (i >= 0 + n)
	{
		res[i--] = base_to[ibase % ft_strlen(base_to)];
		ibase = ibase / ft_strlen(base_to);
	}
	if (n)
		res[i] = '-';
	return (res);
}
