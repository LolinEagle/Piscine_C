/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:22:39 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 22:41:07 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_resolve(int *tab, int pos, int *values, int total)
{
	int	i;

	i = 0;
	if (pos >= 16)
		return (1);
	if (tab[pos] != 0)
		return (ft_resolve(tab, pos + 1, values, total));
	while (++i < 5)
	{
		if (!ft_check_line(tab, pos, i) && !ft_check_col(tab, pos, i))
			tab[pos] = i;
		if (1)
		{
			if (ft_resolve(tab, pos + 1, values, total))
				return (1);
		}
	}
	tab[pos] = 0;
	return (0);
}
