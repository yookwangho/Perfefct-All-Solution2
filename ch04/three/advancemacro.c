#include <stdio.h>

#define MESSAGE "���α׷������ �н��� �Ϲݾ���� �н���\
				���� �ݺ��н��� �߿��ϴ�"

#define PI	3.141592
#define VOLUME(r)	(4 * PI * CUBE(r) / 3)
#define SQUARE(x)	( (x) * (x) )
#define CUBE(x)		( SQUARE(x) * (x) )
#define			( (x) * (y) )


int main(void)
{
	printf("�������� %.21f�� ���� ü���� %.21f �Դϴ�.\n", radius, VOLUME(radius));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 4.29, SQUARE(4.29));
	printf("�Ǽ� %.2f�� ������ %.2f �Դϴ�.\n", 3.0, CUBE(3.0));
	printf("�Ǽ� %.2f�� �Ǽ� %.2f�� ���� %.2f�Դϴ�.\n", 2.78, 3.62,
		MULT(2.78, 3.62));
	puts(MESSAGE);

	return 0;
}