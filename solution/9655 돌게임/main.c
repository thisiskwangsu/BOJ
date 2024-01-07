#include <stdio.h>

int main(void)
{
    int n;
    int total = 0;
    int tmp;
    int cnt = 0;
    scanf("%d", &n);

    if (n >= 3)
    {
        total += 3;
        tmp = n - 3;
        cnt++;
    }
    else
    {
        total += 1;
        tmp = n - 1;
        cnt++;
    }
    while (total != n)
    {
        if (tmp >= 3)
        {
            total += 3;
            tmp -= 3;
        }
        else
        {
            total += 1;
            tmp -= 1;
        }
        cnt++;
    }
    if (cnt % 2 == 0)
        printf("CY");
    else
        printf("SK");
    return 0;
}