#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };	//초기값
	////배열명[행의 개수][열의 개수] 0~2행 0~2열 -> 9개 요소 구성
	//int i, j;
	//for (i = 0;i < 3;i++)	//i=행 의미 0~2
	//{
	//	for (j = 0;j < 3;j++)	//j=열 의미 0~2
	//		printf("%d\t", a[i][j]);
	//	//i=0 j=0 1 2
	//	//i=1 j=0 1 2
	//	//i=2 j=0 1 2
	//	printf("\n");
	//}

	//누적 합계 출력
	int b[4][3] = { {100,200,300},{10,0,0},{50,100,150},{30,40,0} };
	int i, j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d\t", b[i][j]);
			sum += b[i][j];
		}
		printf("\n");
	}
	printf("\n%d", sum);



	return 0;
}