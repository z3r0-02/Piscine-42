/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:49:27 by thbui             #+#    #+#             */
/*   Updated: 2022/10/25 21:40:32 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main(void)
{
	printf ("ex00\n\n");
	int	fact;

	fact = 5;
	printf ("factorial of num %d: %d\n", fact, ft_iterative_factorial(fact));
	fact = 0;
	printf ("factorial of num %d: %d\n", fact, ft_iterative_factorial(fact));
	fact = 1;
	printf ("factorial of num %d: %d\n", fact, ft_iterative_factorial(fact));
	printf ("\nex01\n\n");
	int	fac;

 	fac = 5;
 	printf ("factorial of num %d: %d\n", fac, ft_recursive_factorial(fac));
	fac = 0;
 	printf ("factorial of num %d: %d\n", fac, ft_recursive_factorial(fac));
	fac = 1;
	printf ("factorial of num %d: %d\n", fac, ft_recursive_factorial(fac));
	printf ("\nex02\n\n");
	int	num_p;
	int	power;

	num_p = 3;
	power = 3;
	printf ("power %d of num %d: %d\n", power, num_p, ft_iterative_power(num_p, power));
	num_p = 3;
	power = 0;
	printf ("power %d of num %d: %d\n", power, num_p, ft_iterative_power(num_p, power));
	num_p = 3;
	power = -1;
	printf ("power%d of num %d: %d\n", power, num_p, ft_iterative_power(num_p, power));
	printf ("\nex03\n\n");
	int	nump;
	int	pow;

	nump = 3;
	pow = 3;
	printf ("power %d of num %d: %d\n", pow, nump, ft_recursive_power(nump, pow));
	nump = 3;
	pow = 0;
	printf ("power %d of num %d: %d\n", pow, nump, ft_recursive_power(nump, pow));
	nump = 3;
	pow = -1;
	printf("power%d of num %d: %d\n", pow, nump, ft_recursive_power(nump, pow));
	printf("\nex04\n\n");
	int	fibo;

	fibo = 7;
	printf("fibonacci of num %d: %d\n", fibo, ft_fibonacci(fibo));
	fibo = -1;
	printf("fibonacci of number%d: %d\n", fibo, ft_fibonacci(fibo));
	printf("\nex05\n\n");
	int	square;

	square = 36;
	printf("sqrt of num %d: %d\n", square, ft_sqrt(square));
	square = 5;
	printf("sqrt of num %d: %d\n", square, ft_sqrt(square));
	printf("\nex06\n\n");
	int	prime;

	prime = 13;
	printf("is %d prime num? Output 1=yes, 0=no: %d\n", prime, ft_is_prime(prime));
	prime = 9;
	printf("is %d prime num? Output 1=yes, 0=no: %d\n", prime, ft_is_prime(prime));
	prime = 2147483647;
	printf("is %d prime num? Output 1=yes, 0=no: %d\n", prime, ft_is_prime(prime));
	printf("\nex07\n\n");
	int	nprime;

	nprime = 2147483646;
	printf("Next prime num after %d is: %d\n", nprime, ft_find_next_prime(nprime));
	nprime = 11;
	printf("Next prime num after %d is: %d\n", nprime, ft_find_next_prime(nprime));
	nprime = 8;
	printf("Next prime num after %d is: %d\n", nprime, ft_find_next_prime(nprime));
	return (0);
}
