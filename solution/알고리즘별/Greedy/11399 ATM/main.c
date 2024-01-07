#include <stdio.h>

int main(void)
{
    int num;
    int i, j, tmp;
    int sum = 0;
    scanf("%d", &num);
    int minutes[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%1d", &minutes[i]);
    }

    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (minutes[i] > minutes[j])
            {
                tmp = minutes[i];
                minutes[i] = minutes[j];
                minutes[j] = tmp;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        sum = sum + minutes[i] * (num - i);
    }
    printf("%d", sum);
    return 0;
}