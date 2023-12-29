#include <iostream>
#include "Sample.h"

using namespace std;
void print(Sample s) {

}
int main01() {
	Sample s(10, 20);
	s.print();

	int a(10);
	cout << a << endl;

	Sample s1 = s;
	s1.print();
	s.a = 100;
	s1.print();

	Sample s2(s);
 	return 0;
}