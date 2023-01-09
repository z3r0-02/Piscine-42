/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:19:00 by thbui             #+#    #+#             */
/*   Updated: 2022/11/02 22:19:07 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}
}
