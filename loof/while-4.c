#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 1;i <= 3;i++)
	{
		for (j = 1;j <= 3;j++)
		{
			printf("%d %d\n", i, j);
		}


	}
	/*int a= 1, b;
	
	while (a <= 3)
	{
		b = 1;
		while (b <= 3)
		{
			printf("%d %d\n", a, b);
			b++;
		}
		a++;
	}*/



	return 0;
}