#include <stdio.h>
#include <stdlib.h>

int main04() {
	int a = 10;
	int b = 20;
	int c;

	c = a + b;
	printf("%d\n", c);		// ��
	printf("%u\n", &c);		// �ּ�
	printf("%u\n", *&c);	// �ּҿ� �ش��ϴ� ��
	return 0;
}