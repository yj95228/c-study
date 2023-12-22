#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// 구조체 배열
int main10() {
	Person ps[3] = { {"둘리",7,"쌍문동"}, {"도치",8,"쌍문동"} , {"도우너",9,"쌍문동"} };
	for (int i = 0; i < 3; i++) {
		printf("이름 : %s, 나이 : %d, 주소 : %s\n", ps[i].name, ps[i].age, ps[i].addr);
	}
	Person p;
	printf("이름을 입력하세요\n");
	scanf("%s", p.name);
	printf("나이를 입력하세요\n");
	scanf("%d", &p.age);
	printf("주소를 입력하세요\n");
	scanf("%s", p.addr);
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하세요\n");
		scanf("%s", ps[i].name);
		printf("나이를 입력하세요\n");
		scanf("%d", &ps[i].age);
		printf("주소를 입력하세요\n");
		scanf("%s", ps[i].addr);
	}
	return 0;
}