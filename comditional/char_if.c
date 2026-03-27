//문제) 1글자를 받아 대문자, 소문자, 숫자로 분류
#include <stdio.h>

int main(void)
{
	char ch;	//문자 1글자 변수
	printf("문자를 입력하세요\n");
	//scanf("%c",&ch);
	ch = getchar();	//1글자 입력

	
		if (ch >= '65' && ch <= '90')
			//(ch >= 65 && ch <= 90)
			printf("대문자입니다");
			
		else if (ch >= 'a' && ch <= 'z')
			//ch >= 97 && ch <= 122)
			printf("소문자입니다");
			
		else if (ch >= '0' && ch <= '9')
			//(ch >= 48 && ch <= 57)
			printf("숫자입니다");
			//c언어에서 문자가 숫자로 저장
		else
			printf("그외의 문자입니다");




	return 0;
}