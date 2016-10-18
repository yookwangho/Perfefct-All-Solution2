#define_CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
	int sum, credit;
	printf("당신의 학번과 신청학점은? ");
	scanf("%d%d", &snum, &credit);
	printf("학번: %d 신청학점: %d\n", snum, credit);


	return 0;
}