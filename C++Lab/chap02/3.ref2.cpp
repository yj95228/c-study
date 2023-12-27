#include <iostream>
using namespace std;

void change(int a, int b) {
	a++;
	b++;
}

void change1(int* a, int* b) {
	(*a)++;
	(*b)++;
}

void change2(int& a, int b) {
	a++;
	b++;
}

int main03() {
	int a = 10;
	int b = 20;

	change(a, b);
	cout << a << ", " << b << endl;

	// c style
	change1(&a, &b);
	cout << a << ", " << b << endl;

	// c++ style
	change2(a, b);
	cout << a << ", " << b << endl;

	return 0;
}