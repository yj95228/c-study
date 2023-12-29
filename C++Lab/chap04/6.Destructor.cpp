#include <iostream>
#include "Sample2.h"
using namespace std;

int main06() {
	// 정적 선언 방식
	Sample2 s;
	char name[] = { "1234" };
	Sample2 ss(name);

	// 동적 선언 방식
	Sample2* s1 = new Sample2;
	delete s1;

	// 임시적 선언
	Sample2();
	return 0;
}