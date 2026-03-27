#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, cnt = 0, i;
	printf("원하는 배수 입력 : ");
	scanf("%d", &i);	//i는 원하는 배수의 숫자	//3
	printf("배수의 개수 입력 : ");
	scanf("%d", &num);	//보여지는 배수의 개수	//5
	while (cnt++ < num)	//0<5조건 물어보고 참=>다음문장 가기전에
		//0 < 5조건 물어보고 참=> 다음문장 가기전에 cnt+1->cnt 1이됨
		//1 < 5조건 물어보고 참=> 다음문장 가기전에 cnt+1->cnt 2이됨
		//2 < 5조건 물어보고 참=> 다음문장 가기전에 cnt+1->cnt 3이됨
		//3 < 5조건 물어보고 참=> 다음문장 가기전에 cnt+1->cnt 4이됨
		//4 < 5조건 물어보고 참=> 다음문장 가기전에 cnt+1->cnt 5이됨
		//5 < 5조건 물어보고 거짓=> 탈출
		printf("%d", i * cnt);

	return 0;
}