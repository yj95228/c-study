#include <iostream>
#include "Sample.h"
using namespace std;

int main() {
	Sample s(10, 20);
	Sample s1 = s; // 복사 생성자 호출
	Sample s2;

	// 객체가 만들어진 후에 객체를 이용하여 값을 입력하므로 복사 생성자 호출 X
	s2 = s;
	s2.print();
	return 0;
}