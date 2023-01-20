#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int i;
    int *res;
    int size;

    i = 0;
    size = max - min;
    res = malloc(sizeof(int) * size);
    if (max < min)
        return (NULL);
    while (max > min)
    {
        res[i] = min;
        min++;
        i++;
    }
    return (res);
}

int main(void)
{
    int i = 0;
	int *res = ft_range(1, 10);
	while(*res)
	{
		printf("%d", *res);
		res++;
	}
	return (0);
}