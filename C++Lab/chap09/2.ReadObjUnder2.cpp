#include <iostream>
using namespace std;

// 구조체로 클래스 흉내내보기

typedef struct Data {
	int data;
	// 함수 포인터
	void (*Add)(Data*, int num);
	void (*ShowData)(Data*);
} Data;
void Add(Data* THIS, int num) { THIS->data += num; }
void ShowData(Data* THIS) { cout << "data : " << THIS->data << endl; }

int main02() {
	Data obj = {15, Add, ShowData};
	obj.Add(&obj, 10);
	obj.ShowData(&obj);
	return 0;
}