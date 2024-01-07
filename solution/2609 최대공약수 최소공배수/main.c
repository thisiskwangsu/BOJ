#include <stdio.h>

int GCD(int num1, int num2) // 최대공배수
{
    int gcd;
    while (num2 != 0)
    {
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
        if (num2 == 0)
            return num1;
    }
}
int LCM(int num1, int num2) // 최소공배수
{
    return num1 * num2 / GCD(num1, num2);
}
int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        int tmp = 0;
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    printf("%d\n", GCD(num1, num2));
    printf("%d", LCM(num1, num2));
    return 0;
}

/* 유클리드 호제법
    1. 큰수를 작은수로 나눈다
    2.나누는 수를, 나머지로 계속 나눈다
    나머지가 0이 나오면,
    나누는 수가 최대공약수 */