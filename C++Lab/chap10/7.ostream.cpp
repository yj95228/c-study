#include <iostream>

using namespace std;

namespace my {
	class ostream {
	public:
		ostream& operator<<(char* str) {
			printf("%s", str);
			return *this;
		}
		ostream& operator<<(const char* str) {
			printf("%s", str);
			return *this;
		}
		ostream& operator<<(char str) {
			printf("%c", str);
			return *this;
		}
		ostream& operator<<(int str) {
			printf("%d", str);
			return *this;
		}
		ostream& operator<<(double str) {
			printf("%lf", str);
			return *this;
		}
		ostream operator<<(ostream& (*fp)(ostream& ostm)) {
			return fp(*this);
		}
	};

	ostream& endl(ostream& ostm) {
		ostm << '\n';
		return ostm;
	}
	ostream cout;
}

int main07() {
	my::cout << 3.14 << ", " << 1234 << my::endl;
	std::cout << 3.14 << ", " << 1234 << std::endl;
	return 0;
}