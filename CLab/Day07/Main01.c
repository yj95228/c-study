#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
#define LIMIT 100.0
#define MSG "passed"
#define ERR_PRINT printf("������ �߻��߽��ϴ�\n")

int main01() {
	double radius, area;
	
	printf("�������� �Է��ϼ��� (100 ���Ϸ�)\n");
	scanf("%lf", &radius);
	area = radius * radius * PI;

	if (radius > LIMIT) ERR_PRINT;
	else printf("���� ������ %.4lf �Դϴ�", area, MSG);
	return 0;
}