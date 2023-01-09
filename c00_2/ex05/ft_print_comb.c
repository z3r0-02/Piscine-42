/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:57:00 by thbui             #+#    #+#             */
/*   Updated: 2022/10/15 11:33:51 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_numbers(char y, char x, char z)
{
	write(1, &y, 1);
	write(1, &x, 1);
	write(1, &z, 1);
	if (y != '7' | x != '8' | z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_numbers(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
