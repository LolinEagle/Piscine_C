/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:47:21 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/06 11:54:57 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			write (1, " ", 1);
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			write (1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
