/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:00:31 by thbui             #+#    #+#             */
/*   Updated: 2022/10/25 01:19:05 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb / j != nb)
	{
		i = i * j;
		j--;
	}
	return (i);
}
