/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:07:15 by seozcan           #+#    #+#             */
/*   Updated: 2021/08/26 13:21:13 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

//char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 3)
		//printf("%s\n", ft_strjoin(ac, av, "-/-"));

	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789"));
	printf("0 : %s\n", ft_convert_base("0", "01234567", "01234567"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789abcdef", "0123456789abcdef"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789", "01234567"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789abcdef"));
	printf("2a : %s\n", ft_convert_base("42", "0123456789", "0123456789abcdef"));
	printf("-2a : %s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
	printf("42 : %s\n", ft_convert_base("2a", "0123456789abcdef", "0123456789"));
	printf("-42 : %s\n", ft_convert_base("-2a", "0123456789abcdef", "0123456789"));
	printf("42 : %s\n", ft_convert_base("52", "01234567", "0123456789"));
	printf("-42 : %s\n", ft_convert_base("-52", "01234567", "0123456789"));
	printf("vn : %s\n", ft_convert_base("42", "0123456789", "poneyvif"));
	printf("-vn : %s\n", ft_convert_base("-42", "0123456789", "poneyvif"));
	printf("0 : %s\n", ft_convert_base("0", "01", "0123456789"));
	printf("0 : %s\n", ft_convert_base("0", "01", "0123456789abcdef"));
	printf("7fffffff : %s\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("-80000000 : %s\n", ft_convert_base("-2147483648", "0123456789", "0123456789abcdef"));
	printf("2147483647 : %s\n", ft_convert_base("7fffffff", "0123456789abcdef", "0123456789"));
	printf("-2147483648 : %s\n", ft_convert_base("-80000000", "0123456789abcdef", "0123456789"));	
	printf("0 : %s\n", ft_convert_base("", "0123456789abcdef", "0123456789"));
}
