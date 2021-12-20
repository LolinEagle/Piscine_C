/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_written.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:00:11 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/22 15:34:01 by kissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//Nombre de dizaine
int	ft_nbrsize(int nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

//Il manque la base
void	ft_written(int nb)
{
	int	i;

	i = ft_nbrsize(nb);
	while (i > 0)
	{
		if (i % 3 == 0)
		{
			ft_putstr("one ");
			ft_putstr("hundred ");
		}
		else if (i % 3 == 2)
			ft_putstr("twenty ");
		else
		{
			ft_putstr("one");
			if (i / 3 > 0)
				ft_putstr(" thousand ");
		}
		i--;
	}
	ft_putstr("\n");
}

/*#include "atoi.c"

int	main(int argc, char **argv)
{
	int	nb;

	if (argc > 1)
	{
		nb = ft_atoi(argv[1]);
		ft_written(nb);
	}
}*/
