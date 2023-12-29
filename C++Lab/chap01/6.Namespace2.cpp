#include <iostream>

namespace AA {
	namespace BB {
		namespace CC {
			int a;
			void func1();
		}
	}
}

int main() {
	AA::BB::CC::func1();
	namespace ABC = AA::BB::CC;
	ABC::func1();
	using AA::BB::CC::func1;
	func1();
	using namespace std;
	cout << "Hello SCSA" << endl;
	return 0;
}


void AA::BB::CC::func1() {
	std::cout << "AA::BB::CC::func1" << std::endl;
}