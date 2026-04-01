#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int cnt = 0;
    for (int i = 1; ;i++)
    {
        if (i > 10)
        {
            break;
        }
        if(i % 3 == 0)
        {
            cnt++;
        }
    }
    printf("3의 배수 개수 : %d\n", cnt);


    return 0;
}