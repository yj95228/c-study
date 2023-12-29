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
			cout << "잘못된 월이 입력되었습니다" << endl;
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
			cout << "잘못된 일이 입력되었습니다" << endl;
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
	// d.month = 12;	// 01 ~ 07까지는 에러 안 나는데 08부터는 8진수 인식해서 에러
	// d.day = 29;

	d.setYear(2023);
	d.setMonth(12);
	d.setDay(29);

	d.print();
	return 0;
}