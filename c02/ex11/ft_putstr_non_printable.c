/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:09:44 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/11 11:54:29 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			while (str[i] != 0)
			{
				r = str[i] % 16;
				if (r < 10)
					ft_putchar(r + '0');
				else
					ft_putchar(r + 'a' - 10);
				str[i] = str[i] / 16;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
