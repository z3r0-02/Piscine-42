#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*res;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = malloc(sizeof(int) * size);
	if (res == NULL)
		return (-1);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	*range = res;
	return (size);
}

int main(void)
{
	int *res;
	ft_ultimate_range(&res, 1, 10);
	while(*res)
	{
		printf("%d\n", *res);
		res++;
	}
	return (0);
}
