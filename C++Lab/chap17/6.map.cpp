#include <iostream>
#include <map>
#include <algorithm>
#include "Person.h"
using namespace std;
/*
	map
		set�� ���� �����̳� <key, value> �������� �����ȴ�
		key �� �ߺ��ɼ� ���� ���� Ű���� ������ ������Ʈ�� �ȴ�
		key�� value�� pair�� �̿��Ͽ� ����ϰų� [key]=value ���·� ����Ѵ�	
*/
template <typename K, class V>
void print(map<K,V>& m) {
	for (const auto& p : m){
		cout << p.first << " : ";
		p.second->printPerson();
	}
	cout << endl << endl;
}

int main() {
	map<string, Person*> m;
	m["1"] = new Person("�Ѹ�", 7);
	m["2"] = new Person("�����", 8);
	m["3"] = new Person("��ġ", 9);

	print(m);
	return 0;
}