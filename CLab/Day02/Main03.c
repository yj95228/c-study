#include <stdio.h>

int main03() {
	int kor = 100, math = 90, eng = 80;
	int sum = kor + math + eng;
	printf("%d\n", sum);

	// �迭�� ���� ����
	printf("������ �Է��ϼ���\n");
	int jumsu[3];
	int size = sizeof(jumsu) / sizeof(int);
	for (int i = 0; i < size; i++) {
		scanf("%d", &jumsu[i]);
	}
	printf(jumsu[0]);
	return 0;
}