#include <iostream>
using namespace std;

// 참조형 변수는 주소에 이름 하나를 더 만드는 것
// 함수의 인자타입이 참조형 변수이면 주소 복사와 비슷한 효과를 낼 수 있음
// 함수의 리턴 타입이 참조형이면 호출한 쪽의 변수 타입은 일반형 참조형 모두 가능하지만 의미는 다르다
// 호출하는 쪽의 변수도 참조형이면 값 복사가 일어나지 않는다

int& change3(int a, int b) {
	int res = a + b;
	printf("change3: %d %u\n", res, &res);
	return res;
}
int main05() {
	int& res = change3(10, 20);
	printf("main: %d %u\n", res, &res);
	return 0;
}