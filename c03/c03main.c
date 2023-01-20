/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:49:06 by thbui             #+#    #+#             */
/*   Updated: 2022/10/29 19:55:05 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	main(void)
{
	printf("\n-------ex04------\n");
	char s1[] = "Thisis";
	char s2[] = "his";
	printf("my: %s ", ft_strstr(s1, s2));
	printf("\nstandard c function: %s ", strstr(s1, s2));

	printf("\n\n-------ex05------\n");
	char s[] = "this";
	char t[] = "deadly";
	printf("destlen = %lu\nsrclen = %lu", strlen(s), strlen(t));
	printf("\nif size (5) >= destlen (destlen + srclen)\t%d", ft_strlcat(s, t, 5));
	printf("\nif size (1) < destlen (size + srclen)\t\t%d", ft_strlcat(s, t, 1));
	return (0);
}
