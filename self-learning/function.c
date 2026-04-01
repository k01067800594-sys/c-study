#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit(int n)
{
    if (n < 10) return n;
    return (n % 10) + digit(n / 10);    //n의 마지막 자릿수(n%10)와 나머지 앞부분 숫자들ㅇ n/10의 자릿수 합 digit(n/10)을 더한 값을 반환한다.
}
int main(void)
{
    printf("%d", digit(235));
    //digit(235) -> 235<10이 아니므로 (235%10)+digit(235/10) -> 5+digit(23)
    //digit(23) -> 23<10이 아니므로 (23%10)+digit(23/10) -> 3+digit(2)
    //digit(2) -> 2<10이므로 그대로 2 반환 
    // 아래서부터 값을 환산하면
    //digit(2) = 2, digit(23)= 3+2=5, digit(235) = 5+5=10
    
}