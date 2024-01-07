#include <stdio.h>

int Add(int num1, int num2) // 덧셈기능 함수, 전달인자ㅇ 반환값x
{
    return num1 + num2;
}

void ShowAddResult(int num) // 결과출력기능함수, 전달인자ㅇ, 반환값x
{
    printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void) // 입력기능함수, 전달인자x, 반환값ㅇ
{
    int num;
    scanf("%d", &num);
    return num;
}

void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("입력: \n");
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