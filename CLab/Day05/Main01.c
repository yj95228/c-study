#include <stdio.h>
#include <stdlib.h>

// ���� �޸� �Ҵ�
int main01() {
	// ���� ���� ���
	int a = 10;
	double b = 3.5;

	// ���� ���� ���
	// �� ������ 4����Ʈ
	int* p = (int*) malloc(sizeof(int));	// return�� void* Ÿ��
	*p = 10;
	printf("%d\n", *p);
	// �޸� ������ ���־�� �Ѵ�
	free(p);
	printf("%d\n", *p);	// �޸� �����ߴٰ� �����Ͱ� ������� ����
	// visual studio������ �� �����µ� gcc������ 10���� ����
	return 0;
}