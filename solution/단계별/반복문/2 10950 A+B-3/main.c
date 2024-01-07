#include <stdio.h>

int main(void)
{
    int n;
    int a = 1;
    int num1, num2;
    scanf("%d", &n);
    while (a <= n)
    {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1 + num2);
        a++;
    }
    return 0;
}