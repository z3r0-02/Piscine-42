/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:29:04 by thbui             #+#    #+#             */
/*   Updated: 2023/01/20 02:16:08 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//------------------------------------------------------------------------------//

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
 while (s1 != s2)
 {
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] < s2[i])
        return (-1);
    i++;
 }
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d", ft_strcmp("nbmasbd", ""));
//     return (0);
// }