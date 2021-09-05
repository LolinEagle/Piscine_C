/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 22:10:09 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/25 10:46:51 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char str)
{
	if (str == ' ' || str == '\f' || str == '\n')
		return (1);
	else if (str == '\r' || str == '\t' || str == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	res;

	n = 0;
	res = 0;
	i = 0;
	while (ft_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (n > 1)
		n -= 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (n == 1)
		res = -res;
	return (res);
}
