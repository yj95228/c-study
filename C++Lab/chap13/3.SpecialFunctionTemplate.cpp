#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b) {
	cout << "normal" << endl;
	return a > b ? a : b;
}

template<>
const char* Max(const char* a, const char* b) {
	cout << "special" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

int main03() {
	cout << Max(11, 15) << endl;
	cout << Max('T', 'W') << endl;
	cout << Max(3.5, 4.9) << endl;
	cout << Max("SCSA", "Hello") << endl;
	return 0;
}