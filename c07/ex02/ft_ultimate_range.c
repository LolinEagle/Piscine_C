/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:36:14 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/25 15:43:40 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc (sizeof(int) * max);
	if (!*range)
		return (-1);
	i = 0;
	while (i < max)
	{
		*(*range + i) = i + min;
		i++;
	}
	return (max);
}
