#include <iostream>

// 컴파일러가 판단해서 호출부 쪽에 함수 코드를 치환한다
inline int func3(int a, int b = 10) {
	return a + b;
}
int main04() {
	func3(10, 11);
	10 + 11;
	std::cout << func3(11) << std::endl;
	std::cout << 11 + 10 << std::endl;
	return 0;
}