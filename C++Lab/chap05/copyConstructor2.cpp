#include <iostream>
#include "Sample.h"
using namespace std;

int main() {
	Sample s(10, 20);
	Sample s1 = s; // ���� ������ ȣ��
	Sample s2;

	// ��ü�� ������� �Ŀ� ��ü�� �̿��Ͽ� ���� �Է��ϹǷ� ���� ������ ȣ�� X
	s2 = s;
	s2.print();
	return 0;
}