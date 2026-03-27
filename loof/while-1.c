//1~5 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int a = 3, sum = 0;	//초기값 1, a=1~100 변수, sum=합계를 누적할 변수
	//while (a <= 100)	//a<6 i가 1~5, a=6일때 종료
	//{
	//	//printf("%d\n", a);
	//	sum += a;	
	//	a = a + 3;	//a+=1, a++

	//}
	//printf("1~100의 짝수의 합은:%d", sum);

	int num, i = 0;
	printf("양의 정수 입력 : ");
	scanf("%d", &num);
	while (i < num)
	{
		printf("handaman!\n");
		i++;
	}




	return 0;
}