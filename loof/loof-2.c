#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int num, sum = 0, a;
	printf("숫자 입력:");
	scanf("%d", &num);

	for (a = 1; a <= num; a++)
	{
		sum += a;
	}
	printf("%d", sum);*/

	//int num1, num2;	//num1은 곱하는 값, num2는 곱해지는 값을 위한 변수
	//printf("원하는 단 입력:");	//몇단을 할것인지 물어보는 printf
	//scanf("%d", &num2);	//원하는 단을 입력하는 scanf

	//printf("%d단\n", num2); //몇단인지를 num2로 받은 숫자로 표시

	//for (num1 = 1; num1 <= 9; num1++)	//num1<=9는 num1이 9보다 작거나 같으면 종료, num++는 밑에 num2*num1을 실행하고 난 후 num1에 +1
	//{
	//	num2* num1;
	//	printf("%d * %d = %d\n", num2, num1, num1 * num2);	//for문에 있던 연산값을 출력하는 printf

	//}

	int i, j;

	for (i = 2;i <= 9;i++)	//i=단(2~9)
	//i는 j가 다 반복이 끝나면(9번) 증가
	{
		for (j = 1;j <= 9;j++)	//곱하는 1~9 반복
		{
			printf("%d * %d = %-3d\n", i, j, i * j);
			//3d -> 3자리
			//원래는 오른쪽 정렬
			//-를 붙이면 왼쪽 정렬
		}

	}



	return 0;
}