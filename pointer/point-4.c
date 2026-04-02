//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//    int res;
//    int ar[10];
//    printf("숫자 10개 입력 : ");
//    for (int i = 0;i < 10;i++)
//    {
//        scanf("%d", ar[i]);
//    }
//    res = count_even(ar);   //함수 호출
//    print_cnt(res);    //함수 호출
//
//    return 0;
//}
//
////함수 정의
// int count_even(int ar[10])
//{
//     int cnt = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        if (ar[i] % 2 == 0)
//        {
//            cnt = cnt + 1;  //짝수이면 1증가
//        }
//    }
//    return cnt; //반환되는 값(짝수개수)
//}
//
// void print_cnt(int r)   //매개변수 정수형 res -> r
// {
//     printf("짝수의 개수 : %d", r);
// }
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y);
void sub(int i, int y);
void arr_prn(int d[5]);

int main(void)
{
    int a = 10; 
    int b = 20;
    int c[5] = { 1,2,3,4,5 };
    int q;
    q = add(a, b); //함수 호출, dlstn 2ro -> 더할라고
    sub(a, b);
    printf("%d\n", q);
    arr_prn(c);


    return 0;
}

int add(int x, int y)   //매개변수 형을 선언
{
    int k = x + y;
    return k;   //30반환
}
void sub(int i, int y)
{
    int t = i - y;
    printf("%d\n", t);
}
void arr_prn(int d[5])
{
    for (int i = 0; i < 5; i++)
    printf("%d\n", d[i]);
}