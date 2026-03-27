#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
				//기호상수 5->STUDENTS
#define	STUDENTS 5

int main(void)
{
	int score[STUDENTS];	//5개
	int sum = 0;	//누적하는 변수는 0으로 초기화
	int cnt = 0;
	double avg;
	for (int i = 0; i < STUDENTS;i++)
	{
		printf("성적 입력:");
		scanf("%d", &score[i]);
		//sum = sum + score[i];	//sum+=score[i]
		if (score[i] >= 0 && score[i] <= 100)
		{
			if (score[i] != 0)
			{
				sum += score[i];
				cnt++;
			}
		}
		else
		{
			printf("재입력:\n");

			if (i > 0)
				i--;
			else
				i = 0;
		}
		
	}
	if (cnt > 0)
	{
		avg = (double)sum / cnt;
	}
	else
		avg = 0;
	printf("합계:%d\n", sum);
	printf("평균:%.2f", avg);



	return 0;
}