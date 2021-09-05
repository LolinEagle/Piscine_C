/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:44:30 by frrusso           #+#    #+#             */
/*   Updated: 2021/08/11 11:11:36 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex01/ft_strncpy.c"
#include "ex09/ft_strcapitalize.c"
#include "ex11/ft_putstr_non_printable.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcapitalize(char *str);
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char *str = "12345";
    char dest[10] = {'j', 'a', 'c', 49, '1', 35, 45, 98, 0, 0};
    char dest2[10] = {'j', 'a', 'c', 49, '1', 35, 45, 98, 0, 0};

    printf("01: %s\n", ft_strncpy(dest, str, 5));
    printf("01: %s\n", strncpy(dest2, str, 5));

	char	a[] = "SAlut, cOmment TU vas ? 42motS QUArante-DEux; cInquante+Et+un";

	printf("%s\n", ft_strcapitalize(a));

	char	b[] = "\nbonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";

	ft_putstr_non_printable(b);
}
