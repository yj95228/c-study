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
//	third();
//	cout << "End of Second Function" << endl;
//}
//void third() {
//	cout << "Third Function" << endl;
//	throw 1;
//	cout << "End of Third Function" << endl;
//}
//
//int main04() {
//	try {
//		first();
//	}
//	catch (int ex) {
//		cout << "Main 함수 catch 입니다" << endl;
//		cout << "넘어온 값은 " << ex << "입니다" << endl;
//	}
//	cout << "End of Main Function" << endl;
//	return 0;
//}