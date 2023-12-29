#include <iostream>
#include "Sample.h"
#include "Wrapper.h"
#include "Wrapper2.h"
using namespace std;

int main04() {
	int a = 10;
	int b(20);

	Sample s(15);
	s.print();
	Sample s1(15, 25);
	s1.print();

	Wrapper w(1,2,3);
	w.print();

	Sample s3(1, 2);
	Wrapper2 w3(s3);
	return 0;
}