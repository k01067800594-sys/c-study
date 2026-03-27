#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	//printf, scanf
#include <stdlib.h>	//stand, rand
#include <time.h>	//time

int main(void)
{
	srand((unsigned) time(NULL));	//난수 발생기 시드 설정
	int answer = rand() % 100;	//정답을 난수로 발생한다.
	//printf("%d\n", answer);
	int guess;
	int try = 0;

	//반복구조
	do {
		printf("정답을 추측하여 보시오:");
		scanf("%d", &guess);
		try++;
		if (guess > answer)	//사용자가 입력한 정수가 정답보다 높으면
			printf("down(다운)");

		else if (guess != answer)	//사용자가 입력한 정수가 정답보다 낮으면
			printf("up(업)\n");
	}

	while (guess != answer);	//같지 않으면 계속 수행

		printf("축하합니다. 시도횟수=%d\n", try);


	return 0;
}