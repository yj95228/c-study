#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		if (i%2 == 0){
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}