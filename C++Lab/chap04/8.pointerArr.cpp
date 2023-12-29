#include <iostream>
#include "Sample2.h"

using namespace std;

int main() {
	// 클래스 배열
	Sample2 s1[2];
	s1[0].a = 100;
	s1[0].print();
	s1[0].a = 200;
	s1[0].print();

	// 클래스 배열의 동적 선언
	Sample2* s2[2];
	// s2[0]->a = 100; -> 객체 생성 없이 포인트 변수만 선언되어서 죽어버림
	s2[0] = new Sample2;
	s2[0]->a = 10;;
	s2[0]->print();
	s2[1] = new Sample2;
	s2[1]->a = 200;
	s2[1]->print();

	// delete[] s2; -> 이렇게 하면 안됨
	delete s2[0];
	delete s2[1];
	return 0;
}