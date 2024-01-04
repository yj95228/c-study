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
//		cout << "Main 함수 int catch 입니다" << endl;
//		cout << "넘어온 값은 " << ex << "입니다" << endl;
//	}
//	catch (char ex) {
//		cout << "Main 함수 char catch 입니다" << endl;
//		cout << "넘어온 값은 " << ex << "입니다" << endl;
//	}
//	cout << "End of Main Function" << endl;
//	return 0;
//}