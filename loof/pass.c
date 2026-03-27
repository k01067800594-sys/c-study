#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int pass = 1234;	//암호
	int pw = 0;
	//pw 입력 받아서 pss(암호) 비교
	//다르면 계속 반복, 맞을때까지 반복
	//맞으면 '로그인 성공' 출력

	while (pw != pass)	//반복은 만족할때, 조건이 만족하지 않을때 반복문 탈출
	{
		printf("암호 입력:");
		scanf("%d", &pw);

	}
	printf("로그인 성공");


	return 0;
}