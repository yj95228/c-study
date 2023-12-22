#include <stdio.h>
#include <stdlib.h>

// 동적 메모리 할당
int main01() {
	// 정적 선언 방식
	int a = 10;
	double b = 3.5;

	// 동적 선언 방식
	// 힙 영역에 4바이트
	int* p = (int*) malloc(sizeof(int));	// return이 void* 타입
	*p = 10;
	printf("%d\n", *p);
	// 메모리 해제를 해주어야 한다
	free(p);
	printf("%d\n", *p);	// 메모리 해제했다고 데이터가 사라지지 않음
	// visual studio에서는 안 나오는데 gcc에서는 10으로 나옴
	return 0;
}