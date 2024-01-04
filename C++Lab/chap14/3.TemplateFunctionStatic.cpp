#include <iostream>
using namespace std;

// �Լ� ���ø������� static
template <class T>
void print() {
	T a = 0;
	a++;
	static T b = 0;
	b++;
	cout << a << ", " << b << endl;
}

int main03() {
	print<int>();
	print<int>();
	print<int>();

	print<double>();
	print<double>();

	print<float>();
	print<float>();

	print<char>();
	print<char>();
	return 0;
}