#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 13;
	printf("���� %d�� ������ 8��Ʈ ���ΰ�:\n", num);

	printf("%d", num >> 7 & 1);
	printf("%d", num >> 6 & 1);
	printf("%d", num >> 5 & 1);
	printf("%d", num >> 4 & 1);
	printf("%d", num >> 3 & 1);
	printf("%d", num >> 2 & 1);
	printf("%d", num >> 1 & 1);
	printf("%d", num >> 0 & 1);

	return 0;
}