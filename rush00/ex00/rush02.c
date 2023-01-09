/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:52:35 by thbui             #+#    #+#             */
/*   Updated: 2022/10/15 23:59:52 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	mark(int check, char m, char n, char p)
{
	int	width;

	width = 1;
	while (width <= check)
	{
		if (width == 1)
		{
			ft_putchar(m);
		}
		else if (width == check)
		{
			ft_putchar(p);
		}
		else
		{
			ft_putchar(n);
		}
		width++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	lenght;

	lenght = 1;
	if (x >= 1 && y >= 1)
	{
		while (lenght <= y)
		{
			if (lenght == 1)
			{
				mark(x, 'A', 'B', 'A');
			}
			else if (lenght == y)
			{
				mark (x, 'C', 'B', 'C');
			}
			else
			{
				mark (x, 'B', ' ', 'B');
			}
			lenght++;
		}
	}
}
