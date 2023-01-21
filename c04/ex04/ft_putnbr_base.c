#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int checkstr(char *str)
{
    int i;
    int j;
    int lenght;

    lenght = ft_strlen(str);
    i = 0;
    if (lenght == '\0' || lenght == 1)  //if base is empty or 1
        return (0);
    while (str[i])      //if string has nonprintable characters or + & - return 0
    {
        if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
        while (j < lenght)          //j = the next character in the string
        {
            if (str[i] == str[j])   //if the same as previous one return 0
                return (0);
            j++;
        }
        i++;
    }
    return (1);    
}
void ft_putnbr_base(int nb, char *base)
{
    int	len;
	int	error;
	long	nbr;

	error = checkstr(base);
	len = ft_strlen(base);
	nbr = nb;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);               //printing
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);     //recursion
			ft_putnbr_base(nb % len, base);
		}
	}
}

// int		main(void)
// {
// 	ft_putnbr_base(000, "");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(40, "poneyvif");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(894867, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(53, "0123456789abcdef");
//     return (0);
// }