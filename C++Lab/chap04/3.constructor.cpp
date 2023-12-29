#include <iostream>
#include "Sample.h"
using namespace std;

int main03() {
	// 정적선언방식
	Sample s1;
	s1.print();
	Sample s2(30);
	s2.print();
	Sample s3(30, 40);

	// 동적선언방식
	Sample* ps = new Sample;
	Sample* ps1 = new Sample(50);
	Sample* ps2 = new Sample(50, 70);
	return 0;
}