#include <iostream>

void func2(int a, int b=7) {
	std::cout << a << ", \n" << b << std::endl;
}
int main03() {
	func2(3, 4);
	func2(3);
	return 0;
}