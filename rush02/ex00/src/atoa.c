/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:55:08 by bsavinel          #+#    #+#             */
/*   Updated: 2021/08/22 18:50:26 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_atoa(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] > '9' || str[i] < '0')
		return (0);
	while (str[i] == '0')
		i++;
	j = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
		j++;
	res = malloc (sizeof(char) * j + 1);
	k = 0;
	while (k <= j)
	{
		res[k] = str[i + k];
		k++;
	}
	res[k] = '\0';
	return (res);
}
