#include <stdio.h>

int main(void)
{
    int dan, n = 1;
    scanf("%d", &dan);

    while (n < 10)
    {
        printf("%d * %d = %d\n", dan, n, dan * n);
        n++;
    }
    return 0;
}