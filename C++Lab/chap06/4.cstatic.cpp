#include <iostream>

using namespace std;

void Counter() {
	static int st = 0;
	st++;
	cout << "static: " << st << endl;
}
class SoSimple {
public:
	// Ŭ���� ������ static ������ �ʱ�ȭ�� �� �� ����
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
		// static �Լ������� static ����� ���� �����մϴ�
		// simCntmem++;
		simCnt++;
	}
};
// static member ������ �� �ܺο��� �ʱ�ȭ�� ���־�� �Ѵ�
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