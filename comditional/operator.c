#include <stdio.h>
int main(void)
{
	//int sum, sub, mul; 	//변수를 같은곳에 지정할땐 같이 놔둬도 된다.
	int res1;   //res를 사용해 sum, sub, mul을 연산자로 구분
	//덧셈 뺄셈 곱셈
	int num1, num2;
	//double divi;		//나눗셈
	double res2;
	char op, a;

	while (1)   //while=반복
	{
		//printf("첫번째 숫자 입력:");
		scanf_s("%d", &num1);   //비주얼 스튜디오에선 scanf에 오버플로가 떠서 scanf_s로 사용한다.
		//printf("연산자 입력(+ - * /):");
		scanf_s(" %c", &op);
		//printf("두번째 숫자 입력:");
		scanf_s("%d", &num2);

		switch (op)
		{
		case '+':
			res1 = num1 + num2;
			//printf("덧셈 결과:%d\n",sum);
			break;
		case '-':
			res1 = num1 - num2;
			//printf("뺄셈 결과:%d\n",sub);
			break;
		case '*':
			res1 = num1 * num2;
			//printf("곱셈 결과:%d\n",mul);
			break;
		case '/':
			res2 = (double)num1 / num2;	//switch에서 연산을 하고 실수를 내보낼땐 사용한 변수(float, double)을 써줘야 실수값으로 나온다.
			//printf("나눗셈 결과:%.2f\n",divi);
			break;
			//default:
				//printf("입력오류");
			break;
		}
		//switch case문

		if (op == '+' || op == '-' || op == '*')    //||는 or이라는 뜻으로 사용된다(+@ &&는 and라는 뜻이다)
			printf("연산결과:%d\n", res1);
		else if (op == '/')
			printf("연산결과:%.2f\n", res2);
		else
			printf("입력오류\n");

		printf("연산을 종료하시겠습니까(y/Y)\n");
		scanf_s(" %c", &a);

		if (a == 'y' || a == 'Y')
			break;






	}
	return 0;
}
