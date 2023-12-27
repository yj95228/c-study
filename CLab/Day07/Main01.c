#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
#define LIMIT 100.0
#define MSG "passed"
#define ERR_PRINT printf("에러가 발생했습니다\n")

int main01() {
	double radius, area;
	
	printf("반지름을 입력하세요 (100 이하로)\n");
	scanf("%lf", &radius);
	area = radius * radius * PI;

	if (radius > LIMIT) ERR_PRINT;
	else printf("원의 면적은 %.4lf 입니다", area, MSG);
	return 0;
}