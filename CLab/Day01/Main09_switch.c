#include <stdio.h>
#include <stdlib.h>

int main09() {
	int val1 = 0, val2 = 0;
	char op = '+';
	int res;
	printf("계산식을 입력하세요\n");

	scanf("%d %c %d", &val1, &op, &val2);
	switch (op) {
	case '+':
		res = val1 + val2;
		break;
	case '-':
		res = val1 - val2;
		break;
	case '*':
		res = val1 * val2;
		break;
	case '/':
		res = val1 / val2;
		break;
	}
	printf("결과값은 %d 입니다", res);
	return 0;
}