/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:58:08 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/25 16:00:14 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
			i++;
		else if (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		else
			return (i);
	}
	return (i);
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
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n')
			return (1);
		if (base[i] == '\r' || base[i] == '\t' || base[i] == '\v')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	res;

	if (ft_base_error(base))
		return (0);
	neg = 0;
	i = ft_space(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	res = 0;
	while (ft_base(str[i], base) >= 0)
	{
		res = res * ft_strlen(base) + (ft_base(str[i], base));
		i++;
	}
	if (neg % 2 == 1)
		res = -res;
	return (res);
}
