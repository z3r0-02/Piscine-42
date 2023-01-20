#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    while(argc > j)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        j++;
        write(1, "\n", 1);
    }
}