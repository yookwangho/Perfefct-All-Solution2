#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("���� �Ǵ� 0(����)�� �Է�:");
		scanf("%d", &input);
	} while (input != 0);

	puts("�����մϴ�.");
}