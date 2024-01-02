#include <iostream>

using namespace std;

void Counter() {
	static int st = 0;
	st++;
	cout << "static: " << st << endl;
}
class SoSimple {
public:
	// 클래스 내에서 static 변수의 초기화를 할 수 없다
	// static int simCnt = 0;
	static int simCnt;
	int simCntmem = 10;
	SoSimple() {
		simCnt++;
		simCntmem++;
	}
	void print() {
		simCntmem++;
		simCnt++;
	}
	static void staticPrint() {
		// static 함수에서는 static 멤버만 접근 가능합니다
		// simCntmem++;
		simCnt++;
	}
};
// static member 변수는 꼭 외부에서 초기화를 해주어야 한다
int SoSimple::simCnt = 10;
int main() {
	SoSimple sim1;
	SoSimple sim2;

	cout << sim1.simCnt << "," << sim1.simCntmem << endl;
	cout << sim2.simCnt << "," << sim2.simCntmem << endl;

	cout << SoSimple::simCnt << endl;
	/*for (int i = 0; i < 3; i++) {
		Counter();
	}*/
	return 0;
}