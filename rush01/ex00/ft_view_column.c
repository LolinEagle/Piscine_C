/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_view_column.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:05:38 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 19:08:08 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_view_column(int *tab, int pos, int *values, int total)
{
	int	x;
	int	y;
	int	sight;
	int	res;

	x = ft_get_valuecol(pos);
	y = x + 12;
	sight = 0;
	res = 0;
	while (x <= y)
	{
		if (res < tab[x])
		{
			sight++;
			res = tab[x];
			total += tab[x];
		}
		x += 4;
	}
	if (values[(pos % 4)] == sight && total == 10)
		return (1);
	else if (values[(pos % 4)] <= sight && total != 10)
		return (1);
	return (0);
}
