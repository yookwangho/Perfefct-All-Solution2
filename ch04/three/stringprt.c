#include <stdio.h>


int main(void)
{
	printf("������� �� ���� ���� �ܿ��̴�.\n");
	printf("������� %s %s %s %s�̴�.\n\n", "��", "����", "����", "�ܿ�");
	printf("%s\n", "123456789012345");
	printf("%10.3s\n", "Hello!");
	printf("%-10.3s\n", "Hello!");
	printf("%4s\n", "Hello!");
	printf("%10.*s\n\n", 5, "Hello!");

	printf("%s\n", "123456789012345");
	printf("%s\n", "Hi, C language!");

	printf("%10.3s\n", "Hi, C language!");

	printf("%-10.3s\n", "Hi, C language!");

		printf("%10.*f\n", 3, 124.56789);

	printf("%10.2f%%\n", 3.25);

	printf("%0+10.1f%s\n", 3.25, "%");


	return 0;
}