#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5] = { 9,1,7,3,5 };   //정렬한 배열(초기값 설정)
    int i, j, min, t;   //i : 기준 위치, j : 비교위치, min : 최소값의 인덱스 저장, t : 값 교환을 위한 임시 변수
    for (i = 0;i < 4;i++)   //선택한 정렬 시작(총 4번 반복하면 정렬 완료)
    {
        min = i;    //현재 위치를 최소값 위치로 가정
        for (j = i + 1;j < 5;j++)   //i 다음 위치부터 끝까지 비교
        {
            if (a[j] < a[min])  //더 작은 값이 발견되면 min 인덱스 갱신
                min = j;
        }
        t = a[i];   //찾은 최소값을 현재 위치(i)와 교환
        a[i] = a[min];  //찾은 최소값을 현재 위치(i)와 교환
        a[min] = t; //찾은 최소값을 현재 위치(i)와 교환

    }
    for (i = 0;i < 5;i++)   //정렬된 배열 출력
    {
        printf("%2d", a[i]);
    }


    return 0;
}