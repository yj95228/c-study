#include <stdio.h>
#include <stdlib.h>

// ���� �޸��� ���Ҵ�
// calloc : �ʱ�ȭ��
// realloc : resize��
int main03() {

	// �޸� �Ҵ�
	int* p = (int*)malloc(sizeof(int) * 5);
	memset(p, 0, sizeof(int)*5);
	*p = 5;
	printf("%d\n", *p);

	// �޸� �Ҵ� and �ʱ�ȭ
	p = (int*) calloc(5, sizeof(int));
	*p = 5;
	printf("%d\n", *p);

	// �޸� ���Ҵ�
	p = realloc(p, sizeof(int)*7);
	*(p + 6) = 100;
	printf("%d\n", *(p + 6));

	free(p);
	return 0;
}