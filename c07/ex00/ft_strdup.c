#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	size;
	int	i;
	char	*res;

	i = 0;
	size = ft_strlen(src);
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char str[] = "Hello World!";
	char *res = ft_strdup(str);
	char *og = strdup(str);

	printf("Original: %s", og);
	printf("\nCopy: %s\n", res);
	free(res);
	free(og);
	return (0);
}
