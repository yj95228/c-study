#include <iostream>

// FunctionOverload : �̸��� ����, parameter�� �ٸ���, return�� �������
// parameter�� �ٸ��ٸ� ���� �̸��� �Լ��� ������ �� �ִ�

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

	// ���� �ʱ�ȭ c style
	int i = 10;
	// ���� �ʱ�ȭ c++ style
	int j(20);
	std::cout << i << " " << j << std::endl;

	return 0;
}