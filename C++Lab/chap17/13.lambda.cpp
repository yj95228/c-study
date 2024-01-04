#include <iostream>
#include <vector>
#include <algorithm> // for_each
using namespace std;

/*
	lamda ǥ����
	�Լ��������� �������� �͸��Լ����¸� ���̰�
	�Լ������� ó�� ���Ǿ����ϴ�
	����
	[]()-> returntype {} () ����

	[]: �����Լ� �ۿ��� ����� ������ �����Լ� ���ο���
	����Ҽ� �ְ� �����ϴ� �κ�
		ex
		[&] �ܺο��� ����� ������ ������������ ����Ѵ�
			[&a]
		[=] �ܺο��� ����� ������ ������������ ����Ѵ�
			[=a]
		[this] ��ü������ ��ü�ɹ��� ����ϰ��� �Ҷ� ����Ѵ�
	(): �Ķ���� ����κ�
	-> ����Ÿ������ ���Ǿ�����
		���� void��� ���������ϴ�
	{} : �Լ��� ������
	() : �Լ��� ȣ���(�Լ�����)
*/
int main() {
	int a = 10, b = 5;
	int res = [&]()->int {return a++ + b; }();
	cout << res << endl;
	cout << a << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(13);
	v.push_back(14);
	auto func = [](int val) {cout << val << " "; };
	// -> void return �̹Ƿ� ��������
	for_each(v.begin(), v.end(), func);

	return 0;
}