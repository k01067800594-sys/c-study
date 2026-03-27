//물건값(price, 정수)과 투입금액(money, 정수)를 입력 받아
//5000원권 (c5000), 10000원권(c1000), 100원 동전(c100)개수를 구하여 개수 출력
//잔돈은 change(정수), 최종 나머지 잔돈금액도 출력
//나누기와 나머지 이용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, money, change, c5000, c1000, c100;
	printf("물건값과 투입금액 입력:");
	scanf("%d %d", &price, &money);

	change = money - price;

	c5000 = change / 5000;
	change %= 5000;

	c1000 = change / 1000;
	change %= 1000;

	c100 = change / 100;
	change %= 100;

	printf("5000원권:%d장\n", c5000);
	printf("1000원권:%d장\n", c1000);
	printf("100원권:%d개\n", c100);
	printf("남은돈:%d원\n", change);





	return 0;
}