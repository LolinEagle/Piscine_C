/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:57:24 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/15 18:57:16 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_x(int i)
{
	int	x;

	if (i < 4)
		x = i;
	else if (i < 8 && i >= 4)
		x = i - 4;
	else if (i < 12 && i >= 8)
		x = 0;
	else
		x = 3;
	return (x);
}

int	ft_y(int i)
{
	int	y;

	if (i < 4)
		y = 0;
	else if (i < 8 && i >= 4)
		y = 3;
	else if (i < 12 && i >= 8)
		y = i - 8;
	else
		y = i - 12;
	return (y);
}

int	ft_j(int i)
{
	int	j;

	j = 0;
	if (i < 4)
		j = 4 + i;
	else if (i < 8 && i >= 4)
		j = i - 4;
	else if (i < 12 && i >= 8)
		j = i + 4;
	else
		j = i - 4;
	return (j);
}

int	ft_calpos(int x, int y, int i, int p)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	if (i < 4)
		h = p;
	else if (i < 8 && i >= 4)
		h = -p;
	else if (i < 12 && i >= 8)
		w = p;
	else
		w = -p;
	return (x + w + ((y + h) * 4));
}

int	*ft_fill(int *p, int *p2)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (p2[i] == 1)
			p[ft_x(i) + (ft_y(i) * 4)] = 4;
		else if (p2[i] == 2)
		{
			if (p2[ft_j(i)] == 1)
				p[ft_x(i) + (ft_y(i) * 4)] = 3;
			if (p2[ft_j(i)] == 3)
				p[ft_calpos(ft_x(i), ft_y(i), i, 1)] = 4;
		}
		else if (p2[i] == 4)
		{
			p[ft_calpos(ft_x(i), ft_y(i), i, 0)] = 1;
			p[ft_calpos(ft_x(i), ft_y(i), i, 1)] = 2;
			p[ft_calpos(ft_x(i), ft_y(i), i, 2)] = 3;
			p[ft_calpos(ft_x(i), ft_y(i), i, 3)] = 4;
		}
		i++;
	}
	return (p);
}
