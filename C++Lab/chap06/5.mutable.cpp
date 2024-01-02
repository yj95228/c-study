#include <iostream>

using namespace std;
class Simple2 {
public:
	// const 함수 내에서도 mutable 로 선언한 변수는 변경 가능하다
	mutable int a = 10;
	int b = 20;
	void change() const {
		a++;
		// b++;
	}
};
int main05() {

}