#include <iostream>
#include "Sample2.h"

using namespace std;

int main() {
	// Ŭ���� �迭
	Sample2 s1[2];
	s1[0].a = 100;
	s1[0].print();
	s1[0].a = 200;
	s1[0].print();

	// Ŭ���� �迭�� ���� ����
	Sample2* s2[2];
	// s2[0]->a = 100; -> ��ü ���� ���� ����Ʈ ������ ����Ǿ �׾����
	s2[0] = new Sample2;
	s2[0]->a = 10;;
	s2[0]->print();
	s2[1] = new Sample2;
	s2[1]->a = 200;
	s2[1]->print();

	// delete[] s2; -> �̷��� �ϸ� �ȵ�
	delete s2[0];
	delete s2[1];
	return 0;
}