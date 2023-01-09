/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:29:04 by thbui             #+#    #+#             */
/*   Updated: 2022/10/30 23:29:23 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check(str[i]) == 0)
			i++;
		if (str[i] != '\0' && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] -= 32;
		i++;
		while (str[i] != '\0' && check(str[i]) == 1)
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
