#include <stdio.h>

int main(void)
{
    int n, total;
    int cnt = 0;
    scanf("%d %d", &n, &total);
    int coins[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cnt += total / coins[i];
        total = total % coins[i];
        if (total == 0)
        {
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}
