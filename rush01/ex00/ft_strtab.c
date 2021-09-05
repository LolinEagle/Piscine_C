/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:56:03 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/15 18:58:17 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_strtab(int *p)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			ft_putchar(p[x + (y * 4)] + '0');
			if (x < 4 - 1)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		y++;
		ft_putchar('\n');
	}
}
