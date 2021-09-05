/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_view_rline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:56:26 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 19:11:24 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_view_rline(int *tab, int pos, int *values, int total)
{
	int	x;
	int	y;
	int	sight;
	int	res;

	x = ft_get_valueline(pos);
	y = x + 3;
	sight = 0;
	res = 0;
	while (y >= x)
	{
		if (res < tab[y])
		{
			sight++;
			res = tab[y];
			total += tab[y];
		}
		y--;
	}
	if (values[((pos / 4) + 4)] == sight && total == 10)
		return (1);
	else if (values[((pos / 4) + 4)] <= sight && total != 10)
		return (1);
	return (0);
}
