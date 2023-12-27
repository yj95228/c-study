#include <iostream>

int main02() {
	int a = 10;
	printf("%d %u\n", a, &a);

	int b = a;
	printf("%d %u\n", b, &b);

	int& c = a;
	printf("%d %u\n", c, &c);

	int& d = c;
	printf("%d %u\n", d, &d);

	int arr[] = { 1,3,5 };
	int& a0 = arr[0];
	int& a1 = arr[1];
	int& a2 = arr[2];

	printf("%d %d %d\n", a0, a1, a2);
	a0 = 91;
	a1 = 92;
	a2 = 93;
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	return 0;
}