/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:53:37 by thbui             #+#    #+#             */
/*   Updated: 2022/11/02 00:53:39 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	else
		return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*p_str;
	int				i;

	p_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (p_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		p_str[i].size = ft_strlen(av[i]);
		p_str[i].str = av[i];
		p_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	p_str[i].str = 0;
	p_str[i].copy = 0;
	p_str[i].size = 0;
	return (p_str);
}
