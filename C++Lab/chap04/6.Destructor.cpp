#include <iostream>
#include "Sample2.h"
using namespace std;

int main06() {
	// ���� ���� ���
	Sample2 s;
	char name[] = { "1234" };
	Sample2 ss(name);

	// ���� ���� ���
	Sample2* s1 = new Sample2;
	delete s1;

	// �ӽ��� ����
	Sample2();
	return 0;
}