/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:46:58 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 21:07:46 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0')
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dest);
}

char	*ft_untrim(char *s)
{
	char	*ret_string;
	int		n;
	int		i;

	ret_string = "";
	n = ft_strlen(s);
	if (n % 3 == 0)
		n = 0;
	else if (n != 0)
	{
		n = n % 3;
		n = 3 - n;
	}
	i = 0;
	ret_string = malloc((3 * sizeof(char)) + 1);
	while (i < n)
	{
		ret_string[i] = '0';
		i++;
	}
	ret_string[i] = '\0';
	ft_strcat(ret_string, s);
	return (ret_string);
}

char	*ft_put_separator(char *s)
{
	char	*ret_string;
	int		n;
	int		i;
	int		j;

	n = (ft_strlen(s) % 3) - 1;
	n = n + ft_strlen(s);
	ret_string = malloc((n * sizeof(char)) + 4);
	i = 0;
	j = 0;
	while (s[i])
	{
		if ((i > 0) && (i < (ft_strlen(s) - 1)) && ((i % 3) == 0))
		{
			ret_string[j] = ' ';
			j++;
		}
		ret_string[j] = s[i];
		i++;
		j++;
	}
	ret_string[j] = '\0';
	return (ret_string);
}

char	*ft_formatted_number(char *s)
{
	char	*nb;

	nb = ft_put_separator(ft_untrim(s));
	return (nb);
}
