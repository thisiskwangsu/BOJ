#include <stdio.h>

int GCD(int num1, int num2) // �ִ�����
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
int LCM(int num1, int num2) // �ּҰ����
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

/* ��Ŭ���� ȣ����
    1. ū���� �������� ������
    2.������ ����, �������� ��� ������
    �������� 0�� ������,
    ������ ���� �ִ����� */