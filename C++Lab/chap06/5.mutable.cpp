#include <iostream>

using namespace std;
class Simple2 {
public:
	// const �Լ� �������� mutable �� ������ ������ ���� �����ϴ�
	mutable int a = 10;
	int b = 20;
	void change() const {
		a++;
		// b++;
	}
};
int main05() {

}