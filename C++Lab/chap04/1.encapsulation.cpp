#include <iostream>

using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	void setYear(int _year) { year = _year; }
	int getYear() const { return year; }
	void setMonth(int _month) {
		if (_month < 1 || _month > 12) {
			cout << "�߸��� ���� �ԷµǾ����ϴ�" << endl;
		}
		month = _month; 
	}
	int getMonth() const { return month; }
	void setDay(int _day) { 
		int end;
		switch (month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				end = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				end = 30;
				break;
			case 2:
				end = 28;
				break;
		}
		if (_day < 1 || _day > end) {
			cout << "�߸��� ���� �ԷµǾ����ϴ�" << endl;
			return;
		}
		day = _day;
	}
	int getDay() const { return day; }
	void print() {
		cout << year << "," << month << "," << day << endl;
	}
};

int main01() {
	Date d;
	// d.year = 2023;
	// d.month = 12;	// 01 ~ 07������ ���� �� ���µ� 08���ʹ� 8���� �ν��ؼ� ����
	// d.day = 29;

	d.setYear(2023);
	d.setMonth(12);
	d.setDay(29);

	d.print();
	return 0;
}