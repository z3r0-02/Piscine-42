/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:47:01 by thbui             #+#    #+#             */
/*   Updated: 2023/01/20 02:21:49 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recursive_factorial (nb - 1));
	else
		return (1);
}
