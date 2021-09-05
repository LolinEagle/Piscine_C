/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:32:32 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/08 12:21:30 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;
	int	temp;

	i = 0;
	while (i <= size)
	{
		temp = tab[i];
		j = i + 1;
		while (j <= size)
		{
			if (temp > tab[j])
			{
				temp = tab[j];
				x = j;
			}
			j++;
		}
		tab[x] = tab[i];
		tab[i] = temp;
		i++;
	}
}
