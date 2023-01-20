/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:19:25 by thbui             #+#    #+#             */
/*   Updated: 2022/10/16 23:41:56 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//I_don't_understand_the_question;
//sad;
//never_mind;
//I_do_now;

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	count;

	count = 0;
	if (n == 1)
	{
		while (count < 10)
		{
			ft_putchar(count + '0');
			count++;
		}
	}
}
