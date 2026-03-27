#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5] = { 10, 20, 30, 40, 50 };	//배열 //초기값을 넣을때 { }(중괄호)사용
	int num2[] = { 10, 20, 30 };	//묵시적 배열 /배열 선언 시 배열 크기를 생략하고 초기값만 나열 초기값으로 배열의 크기가 정해짐
	//초기값 3개 []->3 생략
	printf("%d\n", num[2]);	//30출력 /배열은 시작을 0부터 시작함

	int num3[5] = { 1, 2 };	//1 2 0 0 0으로 출력 /초기값을 넣고 초기값이 없는곳에는 0을 넣어채운 후 출력이 됨
	int num4[5] = { 4 };	//4 0 0 0 0
	int num5[5] = { 0 };	//0 0 0 0 0

	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;
	/*printf("%d\n", num6[0]);
	printf("%d\n", num6[1]);
	printf("%d\n", num6[2]);
	printf("%d\n", num6[3]);
	printf("%d\n", num6[4]);*/

	for (int i = 0;i <= 4;i++)	//0~4, 5번 반복
	{
		printf("%d\n", num6[i]);	//배열 요소값 출력
	}


	return 0;
}