/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:42:47 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/10 21:37:11 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char str)
{
	return (str >= 'a' && str <= 'z');
}

int	is_up(char str)
{
	return (str >= 'A' && str <= 'Z');
}

int	is_num(char str)
{
	return (str >= '0' && str <= '9');
}

int	is_alphanum(char str)
{
	return (is_low(str) || is_up(str) || is_num(str));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (is_low(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{	
		if (is_alphanum(str[i]))
		{
			if (!is_alphanum(str[i - 1]))
			{
				if (is_low(str[i]))
					str[i] -= 32;
			}
			else
			{
				if (is_up(str[i]))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
