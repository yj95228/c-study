#include <stdio.h>
#include <stdlib.h>

int main09() {
	int val1 = 0, val2 = 0;
	char op = '+';
	int res;
	printf("������ �Է��ϼ���\n");

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
	printf("������� %d �Դϴ�", res);
	return 0;
}