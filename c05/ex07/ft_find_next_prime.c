/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:39:46 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/18 17:36:32 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_on_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 1;
	while (i < nb / i)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	else if (ft_on_prime(nb))
		return (nb);
	else
	{
		i = 1;
		while (!ft_on_prime(nb + i))
			i++;
		return (nb + i);
	}
}
