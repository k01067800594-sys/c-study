#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int a, int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(void)  //시작
{
    int a, b, result;
    Intro();    //함수 호출, ()안에 인수가 없음
    //함수 앞에 형이 없음, 반환되는 것이 없음 
    a = Input();    //input() 함수 호출, 인수 없음
    b = Input();    //input() 함수 호출, 인수 없음
    result = Add(a, b); //Add 함수 호출, 인수 있음 (정수형 a,b)
    Result_Print(result);   //Result_Print 호출, 인수 하나(정수형)




    return 0;
}

void Intro(void)    //함수, ()안에 매개변수
        //반환되는 값이 없음(void)
{
    printf("****** START ******\n");  //제목 출력 부분
    printf("두 개의 정수 입력 : ");
}

int Input(void) //사용자 정의 함수, 매개변수 없음, 정수 입력 부분
{
    int input;  //변수 선언
    scanf("%d", &input);    //정수형 숫자 입력
    return input;   //값을 반환(보냄)
    //int Input()->int는 반환되는 값의 형 의미
}

int Add(int a, int b)   //int i, int j -> 매개변수(형 선언)
    //a->i b->j
{
    return a + b;   //더한값을 반환(int형)
    //int Add(int i, int j) -> int
}

void Result_Print(int val)  //result->매개변수 val(정수형)
{
    printf("덧셈에 대한 결과 : %d\n", val);
    printf("****** END ******");
    //반환되는 값이 없음->void
}
