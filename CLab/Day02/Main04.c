#include <stdio.h>

int change3(int arr[]) {
	arr[0]++;
	arr[1]--;
};

int main04() {
	int jumsu[3] = {100,90,80};
	change3(jumsu);
	for (int i = 0; i < sizeof(jumsu) / sizeof(int); i++) {
		printf("%d\n", jumsu[i]);
	}
	return 0;
}