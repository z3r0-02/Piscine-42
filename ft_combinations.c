#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int n)
{
    char c;
    int j;

    j = n;
    while (j)
    {
        while (j == 1)
        {
            c = '0';
            while (c <= '9')
                write(1, &c, 1);
            c++;
        }
    }
}

int main(void)
{
    
    return (0);
}