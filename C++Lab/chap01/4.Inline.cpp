#include <iostream>

// �����Ϸ��� �Ǵ��ؼ� ȣ��� �ʿ� �Լ� �ڵ带 ġȯ�Ѵ�
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