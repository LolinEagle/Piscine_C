/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:29:27 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/24 20:20:50 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_error(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0' && base[i] != '+' && base[i] != '-')
		i++;
	if (base[i] == '+' || base[i] == '-')
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	true_nb;
	unsigned int	size;

	if (ft_base_error(base))
		return ;
	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar ('-');
		true_nb = -nbr;
	}
	else
		true_nb = nbr;
	if (true_nb > size - 1)
	{
		ft_putnbr_base(true_nb / size, base);
		ft_putnbr_base(true_nb % size, base);
	}
	else
		ft_putchar(base[true_nb]);
}
