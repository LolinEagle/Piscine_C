/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:10:19 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/24 12:11:09 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*j;

	if (min >= max)
		return (NULL);
	j = malloc (sizeof(int) * (max - min));
	if (!j)
		return (NULL);
	i = min;
	while (i < max)
	{
		j[i - min] = i;
		i++;
	}
	return (j);
}
