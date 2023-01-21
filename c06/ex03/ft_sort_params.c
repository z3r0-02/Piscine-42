/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:59:39 by thbui             #+#    #+#             */
/*   Updated: 2023/01/21 14:34:27 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	print(char **array)
{
	while (*array)
	{
		putstr(*array);
		array++;
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	sort(int num, char **value)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < (num))
	{
		j = 1;
		while (j < num)
		{
			if (ft_strcmp(value[j], value[i]) > 0)
			{
				temp = value[j];
				value[j] = value[i];
				value [i] = temp;
			}
			j++;
		}	
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		sort(argc, argv);
		print(argv + 1);
	}		
	return (0);
}


//--------------------------------------------------------------------------//


void ft_putstr (char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char *tmp;

	i = 1;
	k = 0;
	while (argc > i)
	{
		k = i;
		while (argc > k)
		{
			j = 0;
			while (argv[i][j] && argv[k][j])
			{
				if (argv[i][j] > argv[k][j])
				{
					tmp = argv[i];
					argv[i] = argv[k];
					argv[k] = tmp;
					break;
				}
				j++;
			}
			k++;
		}
		i++; 
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}