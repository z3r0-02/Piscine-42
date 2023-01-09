/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:01:33 by thbui             #+#    #+#             */
/*   Updated: 2022/11/02 01:01:41 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		return (tab);
	}
}

int	main(void)
{
	int min = 0;
	int max = 10;
	int i = 0;
	while (i < max - min)
	{
		printf("%d", *ft_range(min, max));
		i++;
	}
	return (0);
}
