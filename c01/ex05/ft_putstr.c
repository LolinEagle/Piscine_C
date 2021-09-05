/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:20:40 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/07 21:11:09 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

//PAS BIEN PLUS JAMAIS CA
/*void    ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        write(1, str[i], 1);
        i++;
    }
}

int   main(void)
{
    c[] = "bonjour";

    ft_putstr(c);
}*/