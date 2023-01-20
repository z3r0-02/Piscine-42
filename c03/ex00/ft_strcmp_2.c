#include <stdio.h>

int cmp(char *s1, char *s2)
{
    int i;

    i = 0;
 while (s1 != s2)
 {
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] < s2[i])
        return (-1);
    i++;
 }
    return (0);
}

int main(void)
{
    printf("%d", cmp("nbmasbd", ""));
    return (0);
}