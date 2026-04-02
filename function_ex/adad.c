
//함수는 자기 자신을 호출할 수도 있다. 이것을 순환(recursion)라고 부른다.
//재귀 호출(resursive call)이란 함수 내부에서 함수가 자기 자신을 또다시 호출하는 행위
//(스스로를 호출)
//함수 내에 재귀 호출을 중단하도록 조건이 변경될 명령문을 반드시 포함
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int);  //함수 선언 추가

int main(void)
{
    int a;
    printf("숫자 입력 : ");
    scanf("%d", &a);    //5를 받았다는 가정
    printf("%d", func(a));  //a->인수(정수형)
    //a를 인수로 보내면서 func함수 호출하여 받은 결과를 출력


    return 0;
}
int func(int a) //int a->매개변수
{
    if (a <= 1) return 1;
    //순환 호출을 멈추는 부분
    return a * func(a - 1);
    //자기 자신을 순환적으로 호출하다가 결과를 반환
}
//a=5 5 * func(4) 5*24=120
//a=4 4 * func(3) 4*6=24
//a=4 3 * func(2) 3*2=6
//a=4 2 * func(1) 2*1=2