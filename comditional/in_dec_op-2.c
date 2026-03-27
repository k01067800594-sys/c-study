#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 5 % 3;	//a=2
	a--;	//a=1
	b = (a++) + 3;	//a+3(1+3)=4, a+1=2
	printf("%d,%d\n", a, b);	//a:2, b:4 출력
	c = (++a) + 3;	//1+a(1+2)=3, 3+3=6
	printf("%d,%d,%d", a, b, c);	//a:3, b:4(위 연산에 b는 없었기에 전에 연산해둔 b로 출력+), c:6 출력


	return 0;
}