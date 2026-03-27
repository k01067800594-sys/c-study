#include <stdio.h>

int main(void)
{
	/*int a, b, c;
	a = 5 % 3;
	a--;
	b = (a++) + 3;
	printf("%d,%d\n", a, b);
	c = (++a) + 3;
	printf("%d,%d,%d", a, b, c);*/

	/*int num1 = 16, num2 = 44;
	int a = num1++;
	int b = --num2;
	printf("%d", a + b);*/

	/*int val1 = 10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2 == 12);	//1 참
	result2 = (val1 < 12 || val2>12);	//||(or)은 둘 중 하나만 만족하면 참, 1 참
	result3 = (!val1);	//0 거짓
	printf("result1:%d\n", result1);
	printf("result2:%d\n", result2);
	printf("result3:%d\n", result3);*/

	int x = 5, y = 10, z = 20, sum = 0;
	x += y;
	y -= z;
	z %= y;
	sum = x + y + z;
	printf("sum:%d", sum);



	return 0;
}