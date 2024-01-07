#include <stdio.h>

int main(void)
{
    int money;
    int count = 0;
    scanf("%d", &money);
    int change = 1000 - money;

    int change_list[6] = {500, 100, 50, 10, 5, 1};

    for (int i = 0; i < 6; i++)
    {
        count += change / change_list[i];
        change %= change_list[i];
    }
    printf("%d", count);
    return 0;
}