#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;
/*
	����Ʈ
		����� ���Ḯ��Ʈ ����
		�޸𸮻� ������������ �ȴ�
		�˻��� �迭���� �ణ ������ ������ ���� ���Ű� ������
*/
int main() {
	list<int> ls;
	ls.push_back(1);
	ls.push_back(3);
	ls.push_back(5);
	
	for (list<int>::iterator itr = ls.begin(); itr != ls.end(); itr++)
	{
		cout << *itr << " " ;
	}
	cout <<  endl;
	// find �Լ� ���
	list<int>::iterator itr = find(ls.begin(), ls.end(), 3);
	
	cout << (*itr) << endl;
	cout << endl;
	
	return 0;
}