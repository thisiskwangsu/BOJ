#include <stdio.h>

int Add(int num1, int num2) // ������� �Լ�, �������ڤ� ��ȯ��x
{
    return num1 + num2;
}

void ShowAddResult(int num) // �����±���Լ�, �������ڤ�, ��ȯ��x
{
    printf("������� ���: %d \n", num);
}

int ReadNum(void) // �Է±���Լ�, ��������x, ��ȯ����
{
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void)
{
    printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
    printf("�Է�: \n");
}

int main(void)
{
    int result, num1, num2;
    HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}