#include <iostream>

using namespace std;

int main01() {
	int a, b;
	cout << "두 수를 입력하세요" << endl;
	cin >> a >> b;

	if (b == 0) {
		cout << "모수가 0일 수 없습니다" << endl;
		return 0;
	}
	cout << "몫은 " << a / b << endl;
	cout << "나머지는 " << a % b << endl;

	return 0;
}