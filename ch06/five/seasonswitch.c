#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month;

	printf("년도의 월(month)을 입력:");
	scanf("%d", &month);

	switch (month)
	{
	case4: case5:
		printf("%d월은 봄입니다.\n", month);
		break;

	case 6: case 7: case 8:
		printf("%d월은 여름입니다.\n", month);
		break;

	case 9: case 10: case 11:
		printf("%d월은 가을입니다.\n", month);
		break;

	case 12: case 1: case 2: case 3:
		printf("%d월은 겨울입니다.\n", month);
		break;

	default:
		printf("월(month)을 잘못 입력하셨습니다.\n");
	}
	return 0;
}