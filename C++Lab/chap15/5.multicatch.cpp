//#include <iostream>
//
//using namespace std;
//void second();
//void third();
//void first() {
//	cout << "First Function" << endl;
//	second();
//	cout << "End of First Function" << endl;
//}
//void second() {
//	cout << "Second Function" << endl;
//	try {
//		third();
//	}
//	catch (char a) {
//
//	}
//	cout << "End of Second Function" << endl;
//}
//void third() {
//	cout << "Third Function" << endl;
//	throw '1';
//	cout << "End of Third Function" << endl;
//}
//
//int main() {
//	try {
//		first();
//	}
//	catch (int ex) {
//		cout << "Main �Լ� int catch �Դϴ�" << endl;
//		cout << "�Ѿ�� ���� " << ex << "�Դϴ�" << endl;
//	}
//	catch (char ex) {
//		cout << "Main �Լ� char catch �Դϴ�" << endl;
//		cout << "�Ѿ�� ���� " << ex << "�Դϴ�" << endl;
//	}
//	cout << "End of Main Function" << endl;
//	return 0;
//}