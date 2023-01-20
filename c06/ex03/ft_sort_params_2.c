#include <unistd.h>
#include <stdio.h>

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