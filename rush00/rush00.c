/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:39:21 by qqin              #+#    #+#             */
/*   Updated: 2021/08/07 17:21:59 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		h++;
		w = 0;
		while (w < x)
		{
			w++;
			if ((h == 1 || h == y) && (w == 1 || w == x))
				ft_putchar('o');
			else if (h == y || h == 1)
				ft_putchar('-');
			else if (w == 1 || w == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
