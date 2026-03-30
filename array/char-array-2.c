// 과일 이름 3개이며 각 과일이름은 최대 20자
#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruits[3][20];

    for (i = 0; i < 3; i++)
    {
        printf("과일 이름 입력:");
        scanf("%s", fruits[i]);
        printf("%d 번째 과일: %s \n", i, fruits[i]);

    }

    return 0;
}