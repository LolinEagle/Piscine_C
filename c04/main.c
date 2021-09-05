/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:27:24 by nguiard           #+#    #+#             */
/*   Updated: 2021/08/25 11:50:08 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	/*char	bin[3] = "01";
	char	dec[11] = "0123456789";
	char	hexa[17] = "0123456789abcdef";
	char	poneyvif[9] = "poneyvif";
	int		i4 = -2147483648;

	printf("\n:BIN:");
	ft_putnbr_base(i4, bin);
	printf("\n:DEC:");
	ft_putnbr_base(i4, dec);
	printf("\n:HEX:");
	ft_putnbr_base(i4, hexa);
	printf("\n:PON:");
	ft_putnbr_base(i4, poneyvif);*/

	printf("-INT  base:10 res = -INT / %i\n", ft_atoi_base("  -2147483648", "0123456789"));
	printf("-2a   base:16 res = -42  / %i\n", ft_atoi_base("  -2A", "0123456789ABCDEF"));
	printf("+1000 base:10 res = 0    / %i\n", ft_atoi_base("  1000", "0123456789"));
	printf("+1000 base:02 res = 1000 / %i\n", ft_atoi_base("  1000", "01"));
	printf("-4552 base:10 res = 4552 / %i\n", ft_atoi_base("  \t\n+++---+--+---++-------4552sad456", "0123456789"));
}
