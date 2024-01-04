#include <iostream>
using namespace std;

template <typename T, class I>
void showType(double a) {
	cout << (T)a << ", " << (I)a << endl;
}

int main02() {
	showType<char, int>(97);
	showType<char, double>(97.3);
	return 0;
}