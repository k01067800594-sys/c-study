#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //#include 전처리기. 입출력 관련 헤더파일
#include <string.h>

int main(void)
{
    char a[10] = { "hello" };
    printf("%s\n", a);
    printf("%c\n", a[0]);

    char b[10];
    //b = "love";   오류
    strcpy(b, "love");  //문자열복사(대상, 문자열)
    /*b[0] = 'l';
    b[1] = 'o';
    b[2] = 'v';
    b[3] = 'e';*/
    printf("%s", b);
    //strcpy : 문자배열을 선언이후 뒤에 최기화가 암됨
              //이후 문자열 복사할때


    return 0;
}