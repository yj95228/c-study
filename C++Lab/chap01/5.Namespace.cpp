#include <iostream>

// namespace
namespace AA {
	int a;
	void func1() {
		std::cout << "AA::func1 " << a << std::endl;
	};
}
namespace BB {
	int a;
	void func1();
}
int main05() {
	AA::a = 10;
	AA::func1();
	BB::a = 20;
	BB::func1();
	return 0;
}
void BB::func1() {
	std::cout << "BB::func1 " << a << std::endl;
}