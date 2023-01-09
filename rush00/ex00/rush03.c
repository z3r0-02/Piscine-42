/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatulik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:28:42 by jmatulik          #+#    #+#             */
/*   Updated: 2022/10/16 12:28:42 by jmatulik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	column;
	int	row;

	row = 1;
	while (row <= y && column >= 0)
	{
		column = 1;
		while (column <= x)
		{
			if (((row == 1 || row == y) && (column != 1) && (column != x))
				|| ((column == 1 || column == x) && (row != 1) && (row != y)))
				ft_putchar ('B');
			else if ((column == 1 && row == 1) || (column == 1 && row == y))
				ft_putchar ('A');
			else if ((column == x && row == 1) || (column == x && row == y))
				ft_putchar ('C');
			else
				ft_putchar (' ');
			column++;
		}
		ft_putchar ('\n');
		row++;
	}
}
