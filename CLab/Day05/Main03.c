#include <stdio.h>
#include <stdlib.h>

// 동적 메모리의 재할당
// calloc : 초기화됨
// realloc : resize됨
int main03() {

	// 메모리 할당
	int* p = (int*)malloc(sizeof(int) * 5);
	memset(p, 0, sizeof(int)*5);
	*p = 5;
	printf("%d\n", *p);

	// 메모리 할당 and 초기화
	p = (int*) calloc(5, sizeof(int));
	*p = 5;
	printf("%d\n", *p);

	// 메모리 재할당
	p = realloc(p, sizeof(int)*7);
	*(p + 6) = 100;
	printf("%d\n", *(p + 6));

	free(p);
	return 0;
}