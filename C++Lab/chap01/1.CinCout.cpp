#include <iostream>

// 입출력 cin cout
int main01() {
	int a = 10, b = 20, res;
	char c = 'c';
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "3개의 값을 입력하세요" << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "입력하신 값은 a = " << a << ", b = "
		<< b << ", c = " << c << "입니다" << std::endl;

	char name[50];
	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> name;
	std::cout << "입력하신 이름은 " << name << " 입니다" << std::endl;

	std::string name2;
	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> name2;
	std::cout << "입력하신 이름은 " << name2 << " 입니다" << std::endl;
	return 0;
