#include <stdio.h>


int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() ��ȯ��(��µ� ���ڼ�): %d\n", ret_value);

	ret_value = printf("��°�: %d %i %o %#o %#x %#x\n", n, n, n, n, n, n);
	printf("��ȯ��(��µ� ���ڼ�): %d\n", ret_value);

	printf("%d %i\n", 16, 16);
	prinft("%o %#o", 16, 16);
	pritnf("%x %#x %#x\n", 10, 10, 10);

	return 0;
}