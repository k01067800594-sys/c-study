#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int res;
    char a[30], b[30];
    printf("첫번째 단어 입력:");
    scanf("%s", a);
    //문자열을 하나 통으로 할때는 &를 안붙이지만 그중하나만 정하여 값을 넣을땐 &를 사용한다
    printf("두번째 단어 입력:");
    scanf("%s", b);
    res = strcmp(a, b);   //문자열비교
    //res는 0, 음수, 양수
    if (res < 0)    //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
    {
        printf("%s가 %s보다 앞에 있다.\n", a, b);
    }
    else if (res == 0)  //반환값이 0이면 완전히 같다
    {
        printf("%s와 %s가 같다.", a, b);
    }
    else
    {
        printf("%s가 %s보다 작다.", a, b);
        //양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
    }

    return 0;
}