/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:25:10 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/13 14:14:49 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (*to_find == '\0')
		return (str);
	s = str;
	f = to_find;
	while (*s != '\0' || *f == '\0')
	{
		if (*f == '\0')
			return ((char *)(s - (f - to_find)));
		if (*s == *f)
			f++;
		else
			f = to_find;
		s++;
	}
	return (0);
}
