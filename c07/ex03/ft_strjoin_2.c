#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char	*ft_strcat(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *result;
    int strs_size;
    int sep_size;
    int i;

    strs_size = 0;
    sep_size = ft_strlen(sep) * (size - 1);
    if (size == 0)
		return (malloc(sizeof(char)));
    i = 0;                              //reset to 0
    while (i < size)                    //the size of all the strings together
    {
        strs_size = strs_size + ft_strlen(strs[i]);
        i++;
    }
    result = malloc(sizeof(char) * (sep_size + strs_size));
    i = 0;                              //reset to 0
    while (i < size)
    {
        ft_strcat(strs[i], result);     //concatenate string to dest
        if (i < size - 1)               //if i is smaller than the total string number
            ft_strcat(sep, result);     // add sep to dest
        i++;
    }
    return (result);
}

int main(void)
{
	char *strs[] = {"You", "Look", "Very", "cute", ":)"};
	char sep[] = " .  ";
	char *res = ft_strjoin(5, strs, sep);
	printf("%s", res);
	free(res);
	return (0);
}
