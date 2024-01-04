#include <iostream>

using namespace std;

int main02() {
	int a, b;
	cout << "두 수를 입력하세요" << endl;
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
			return 0;
		}
	}
	catch (int ex) {
		cout << "모수가 " << ex << "일 수 없습니다" << endl;
	}

	cout << "몫은 " << a / b << endl;
	cout << "나머지는 " << a % b << endl;

	return 0;
}