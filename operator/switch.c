#include <stdio.h>

int main(void)
{
	int n = 5;
	switch (n)
	{
	case 1:
		printf("1번 입력");
		break;
	case 2:
		printf("2번 입력");
		break;
	case 3:
		printf("3번 입력");
		break;
	default:
		printf("입력 오류");

	}
	//n=5이고 case는 3이 최대여서 default로 넘어가져 입력 오류가 뜬다



	return 0;
}