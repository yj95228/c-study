#include <iostream>

using namespace std;

bool yOrN(int a, int b) {
	return a > b ? true : false;
}
int main01() {
	cout << "true : " << true << endl;
	cout << "false : " << false << endl;

	cout << sizeof(true) << endl;

	bool b = true;
	b = false;

	cout << sizeof(b) << endl;

	cout << yOrN(20, 10) << endl;
	return 0;
}