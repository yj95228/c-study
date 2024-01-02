#include <iostream>
using namespace std;

class AA {
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	AA() : num1(1), num2(2), num3(3) {}
};

class BB : /* private protected  */ public AA {
	void print() {
		// this->num1;
		this->num2;
		this->num3;
	}
};

int main() {
	BB b;
	b.num3 = 10;
	return 0;
}