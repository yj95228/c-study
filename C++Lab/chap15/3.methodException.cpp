#include <iostream>

using namespace std;

void calc(int a, int b) {
	if (b == 0) {
		throw b;
	}
	cout << "몫은 " << a / b << endl;
	cout << "나머지는 " << a % b << endl;
}

int main03() {
	int a, b;
	cout << "두 수를 입력하세요" << endl;
	cin >> a >> b;

	try {
		calc(a, b);
		cout << "calc 함수 종료" << endl;
	}
	catch (int ex) {
		cout << "모수가 " << ex << "일 수 없습니다" << endl;
	}

	cout << "end of main" << endl;

	return 0;
}