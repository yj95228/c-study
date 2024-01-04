#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;
/*
	deque
		�����迭
		���۰� ������ ���԰� ������ �����ϴ� ����
		push_front, push_back
		���Ϳ� ���� ���������� ������������ �ȴ�
*/
template <typename T>
void print(deque<T> deq) {
	for (typename deque<T>::iterator itr = deq.begin(); itr != deq.end(); itr++) {
		cout << (*itr) << " ";
	}
	cout << endl << endl;
}

int main() {
	deque<int> deq;
	deq.push_back(1);
	deq.push_back(3);
	deq.push_back(5);
	deq.push_back(7);
	deq.push_back(9);
	print(deq);
	// �տ��� ����
	deq.pop_front();
	print(deq);
	// �ڿ��� ����
	deq.pop_back();
	print(deq);
	return 0;
}