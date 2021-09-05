/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:54:27 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/24 12:06:40 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*srcm;

	srcm = malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (!srcm)
		return (NULL);
	i = 0;
	while (src[i])
	{
		srcm[i] = src[i];
		i++;
	}
	srcm[i] = '\0';
	return (srcm);
}
