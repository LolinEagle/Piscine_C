/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_viewline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anremiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:19:34 by anremiki          #+#    #+#             */
/*   Updated: 2021/08/15 19:24:21 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_viewline(int *tab, int pos, int *values, int total)
{
	if (ft_view_line(tab, pos, values, total))
	{
		if (ft_view_rline(tab, pos, values, total))
			return (1);
	}
	return (0);
}
