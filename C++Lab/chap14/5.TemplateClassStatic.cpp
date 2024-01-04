#include <iostream>
#include <cstring>
using namespace std;

template<class T>
class StaticSimple {
private:
	static T data;
	T data1 = 0;
public:
	void print() {
		data++;
		data1++;
		cout << "data: " << data << ", data1 : " << data1 << endl;
	}
};

template<class T>
T StaticSimple<T>::data = 0;

int main() {
	StaticSimple<int> s1;
	s1.print();
	s1.print();
	s1.print();
	cout << "------------" << endl;
	StaticSimple<int> s2;
	s2.print();
	s2.print();
	s2.print();
	cout << "------------" << endl;
	StaticSimple<double> s3;
	s3.print();
	return 0;
}