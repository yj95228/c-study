#include <stdio.h>
#include <stdlib.h>

int main10() {
	int a, sum;
	scanf("%d", &a);
	while (1) {
		sum = a++;
		printf("%d \n", sum);
		if (sum > 100) break;
	}
	return 0;
}