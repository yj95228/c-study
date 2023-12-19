#include <stdio.h>

int main03() {
	int kor = 100, math = 90, eng = 80;
	int sum = kor + math + eng;
	printf("%d\n", sum);

	// 배열의 정적 선언
	printf("점수를 입력하세요\n");
	int jumsu[3];
	int size = sizeof(jumsu) / sizeof(int);
	for (int i = 0; i < size; i++) {
		scanf("%d", &jumsu[i]);
	}
	printf(jumsu[0]);
	return 0;
}