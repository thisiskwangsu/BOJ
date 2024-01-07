#include <stdio.h>

int main(void)
{
    int num, i;
    int result = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    printf("%d", result);
    return 0;
}