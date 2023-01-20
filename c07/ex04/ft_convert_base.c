#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int checkbase(char *str)
{
    int i;
    int j;
    int lenght;

    lenght = ft_strlen(str);
    i = 0;
    if (lenght == 1 || lenght == '\0')
        return (0);
    while (str[i])      //if string has nonprintable characters or + & - return 0
    {
        if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
        while (j < lenght)
        {
            if (str[i] == str[j])   //if any char in the string is the same as i return 0
                return (0);
            j++;
        }
        i++;
    }
    return (i);    
}

int nbbase(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
    {
        if (c == base[i])
            return (i);
        i++;
    }
    return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
    sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)   //tabs & space ++
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int ft_atoi_base(char *str, char *base)
{
    int i;
    int num;
    int lenght;
    int atoi;
    int nb;

    i = 0;
    lenght = checkbase(base);
    num = 0;
    if (lenght >= 2)
    {
        atoi = whitespaces(str, &i);
        nb = nbbase(str[i], base);
        while (nb != -1)
        {
            num = (num * lenght) + nb;
            i++;
            nb = nbbase(str[i], base);
        }
        return (num *= atoi);
    }
    return (0);
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    
}