#include <stdio.h>

int main(void)
{
	//int i = 4000;
	//int* p = NULL;	//포인터 변수 선언

	//p = &i;	//i변수의 주소를 p 포인터 변수에 줌

	//printf("p = %p\n", p);
	////%p : 주소를 출력하는 서식 문자
	//printf("&i = %p\n\n", &i);

	//printf("i = %d\n", i);
	//printf("*p = %d\n", *p);
	////주소에 저장된 내용에 접근하는 포인터

	int x = 10, y = 20;	//정수 변수 x, y 선언 및 초기화
	int* pi;	//포인터변수

	pi = &x;	//x의 주소를 포인터 변수 pi에 준다
	printf("pi = %p\n", pi);	//x의 주소를 pi가 기억함
	printf("*pi = %d\n", *pi);	//10출력

	pi = &y;
	printf("pi = %p\n", pi);	//y의 주소를 pi가 기억함
	printf("*pi = %d\n", *pi);	//20출력

	return 0;
}