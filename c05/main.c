/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:25:27 by nguiard           #+#    #+#             */
/*   Updated: 2021/08/18 20:39:28 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

void	xexercice(int n)
{
	printf("\n\nExercice %d:\n", n);
}

int	main(void)
{
	//Norminette
	system("Norminette -R CheckForbiddenSourceHeader */*.c");

	//Exercice 0;
	xexercice(0);
	printf("7! = %d (bon resultat:5040)\n0! = %d (bon resultat:1)\n-4! = %d (bon resultat:0)", ft_iterative_factorial(7), ft_iterative_factorial(0), ft_iterative_factorial(-4));

	//Exercice 1;
	xexercice(1);
	printf("7! = %d (bon resultat:5040)\n0! = %d (bon resultat:1)\n-4! = %d (bon resultat:0)", ft_recursive_factorial(7), ft_recursive_factorial(0), ft_recursive_factorial(-4));

	//Exercice 2:
	xexercice(2);
	printf("2^7 = %d (bon resultat:128)\n4^0 = %d (bon resultat:1)\n6^-14 = %d (bon resultat:0)", ft_iterative_power(2, 7), ft_iterative_power(4, 0), ft_iterative_power(6, -14));

	//Exercice 3:
	xexercice(3);
	printf("2^7 = %d (bon resultat:128)\n4^0 = %d (bon resultat:1)\n6^-14 = %d (bon resultat:0)", ft_recursive_power(2, 7), ft_recursive_power(4, 0), ft_recursive_power(6, -14));

	//Exercice 4;
	xexercice(4);
	printf("Indice 9: %d (bon resultat:34)\nIndice -5: %d (bon resultat:-1)\nIndice 0: %d (bon resultat:0)\nIndice 2: %d (bon resultat:1)", ft_fibonacci(9), ft_fibonacci(-5), ft_fibonacci(0), ft_fibonacci(2));

	//Exercice 5;
	xexercice(5);
	printf("Racine de 1: %d (bon resultat: 1)\nRacine de 100: %d (bon resultat: 10)\nRacine de INT: %d (bon resultat: 46340)", ft_sqrt(1), ft_sqrt(100), ft_sqrt(2147395600));

	//Exercice 6;
	xexercice(6);
	printf("%i:1\n", ft_is_prime(2));
	printf("%i:1\n", ft_is_prime(97));
	printf("%i:1\n", ft_is_prime(2147483647));
	printf("%i:0", ft_is_prime(100));

	//Exercice 7;
	xexercice(7);
	printf("%i:2\n", ft_find_next_prime(2));
	printf("%i:97\n", ft_find_next_prime(90));
	printf("%i:INT\n", ft_find_next_prime(2147483640));
	printf("%i:31", ft_find_next_prime(31));
}
