#include <iostream>

// ����� cin cout
int main01() {
	int a = 10, b = 20, res;
	char c = 'c';
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "3���� ���� �Է��ϼ���" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "�Է��Ͻ� ���� a = " << a << ", b = "
		<< b << ", c = " << c << "�Դϴ�" << std::endl;

	char name[50];
	std::cout << "�̸��� �Է��ϼ���" << std::endl;
	std::cin >> name;
	std::cout << "�Է��Ͻ� �̸��� " << name << " �Դϴ�" << std::endl;

	std::string name2;
	std::cout << "�̸��� �Է��ϼ���" << std::endl;
	std::cin >> name2;
	std::cout << "�Է��Ͻ� �̸��� " << name2 << " �Դϴ�" << std::endl;
	return 0;
