#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 3
#define INCREMENT 10

int main(void)
{
	double celcius = 12.46;

	printf("  ����(C) ȭ��(F)\n");
	printf("---------------\n");

	for (int i = 1; i <= MAX; i++, celcius += INCREMENT)
	{
		prinf("%8.2lf %8.2lf\n", celcius, 9.0 / 5 * celcius + 32);

		return 0;
	}
}