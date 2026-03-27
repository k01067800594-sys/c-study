//3명의 점수(정수)를 입력받아
//합계(3명 점수 합계)와 평균(합계/3)출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int sum;
	double avg;

	printf("3명의 점수 입력:");
	scanf("%d %d %d", &num1, &num2, &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.;

	printf("합계: %d\n", sum);
	printf("평균: %.2f", avg);

	/*int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	int sum;
	double avg;

	printf("10명의 점수 입력:");
	scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

	sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
	avg = (double)sum / 10;
	
	printf("합:%d\n", sum);
	printf("평균:%.2f", avg);*/



	return 0;
}