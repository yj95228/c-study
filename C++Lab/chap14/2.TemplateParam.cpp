#include <iostream>

using namespace std;

template<class T, int len = 10>
class Point {
private:
	T arr[len];
public:
	T& operator[](int idx) {
		return arr[idx];
	}
	T& operator=(const T& r) {
		cout << "operator=" << endl;
		for (int i = 0; i < len; i++)
		{
			arr[i] = r.arr[i];
		}
	}
};

int main02() {
	Point<int, 5> p1;
	p1[0] = 10;
	p1[1] = 20;
	p1[2] = 30;
	p1[3] = 40;
	p1[4] = 50;

	for (int i = 0; i < 5; i++)
	{
		cout << p1[i] << endl;
	}

	Point<int> p2;
	p2[9] = 99;
	cout << p2[9] << endl;

	return 0;
}