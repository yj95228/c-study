#include <iostream>
using namespace std;

//int add(int a, int b) {
//	return a + b;
//}
//double add(double a, double b) {
//	return a + b;
//}
//char* add(char* a, char* b) {
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	char* tmp = new char[len1 + len2 + 1];
//	strcpy(tmp, a);
//	strcat(tmp, b);
//	return tmp;
//}
//string add(string a, string b) {
//
//	return a + b;
//}

// �Լ� ���ø�
template <typename T> // template <class T> typename, class ���� Ű����� ���ø����� ���
T add(T a, T b) {
	return a + b;
}
// �����Ͻ� ����Ÿ�̕��� �������
//int add(int a, int b) {
//	return a + b;
//}

int main01() {
	int res = add<int>(10, 5);
	cout << res << endl;

	cout << add<double>(10.1, 12.3) << endl;

	cout << add<char>('A', '\n') << endl;

	cout << add<string>("hello ", "SCSA !") << endl;
	/*cout << add(5, 10) << endl;
	cout << add(5.1, 10.2) << endl;*/
	return 0;
}