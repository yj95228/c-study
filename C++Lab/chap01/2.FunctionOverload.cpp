#include <iostream>

// FunctionOverload : 이름은 같고, parameter는 다르고, return은 관계없음
// parameter가 다르다면 같은 이름의 함수가 존재할 수 있다

void func1(int a) {
	std::cout << "int " << a << std::endl;
}
void func1(char a) {
	std::cout << "char " << a << std::endl;
}
void func1(const char* a) {
	std::cout << "const char* " << a << std::endl;
}
int main02() {
	func1(3);
	func1('a');
	func1("a");

	// 변수 초기화 c style
	int i = 10;
	// 변수 초기화 c++ style
	int j(20);
	std::cout << i << " " << j << std::endl;

	return 0;
}