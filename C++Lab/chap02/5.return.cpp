#include <iostream>
using namespace std;

// ������ ������ �ּҿ� �̸� �ϳ��� �� ����� ��
// �Լ��� ����Ÿ���� ������ �����̸� �ּ� ����� ����� ȿ���� �� �� ����
// �Լ��� ���� Ÿ���� �������̸� ȣ���� ���� ���� Ÿ���� �Ϲ��� ������ ��� ���������� �ǹ̴� �ٸ���
// ȣ���ϴ� ���� ������ �������̸� �� ���簡 �Ͼ�� �ʴ´�

int& change3(int a, int b) {
	int res = a + b;
	printf("change3: %d %u\n", res, &res);
	return res;
}
int main05() {
	int& res = change3(10, 20);
	printf("main: %d %u\n", res, &res);
	return 0;
}