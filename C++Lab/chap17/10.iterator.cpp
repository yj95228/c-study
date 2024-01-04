#include <iostream>
#include <vector>

using namespace std;
/*
	iterator �ݺ���
	�����̳ʿ� �ִ� ���Ҹ� ���������� �����Ҽ� �ְ� �մϴ�
	��� �����̳ʰ� ���� ����� ����մϴ�
	::iterator
	::const_iterator
	�����̳ʸ��� ���Ǵ� iterator�� �ٸ���
	�׷��� vertor , dequeue �� ���Ǵ� �ݺ��ڴ� ��������� �ȴ�
*/
int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	vector<int>::iterator itr;
	itr = v.begin();
	cout << "------while----------" << endl;
	while (itr != v.end()) {
		cout << *itr << " ";
		++itr;
	}
	cout << endl;
	cout << "------for-------------" << endl;
	for (auto itr = v.begin(); itr != v.end(); ++itr) {
		cout << *itr << " ";
	}
	cout << endl;
	cout << "------for-each---------" << endl;
	for (auto& itr : v) {
		cout << itr << " ";
	}


	return 0;
}