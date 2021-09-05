/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:51:36 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/07 15:15:42 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	atemp;
	int	btemp;

	atemp = *a / *b;
	btemp = *a % *b;
	*a = atemp;
	*b = btemp;
}
