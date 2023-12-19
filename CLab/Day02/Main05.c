#include <stdio.h>
#include <string.h>

int main05() {
	char str1[20] = "hello";
	printf("%s\n", str1);

	char str2[20];
	for (int i = 0; i < sizeof(str1); i++) {
		str2[i] = str1[i];
	}
	printf("%s\n", str2);

	printf("%s\n", strcpy(str1, "È«±æµ¿"));
	printf("%s\n", strcat(str1, "µÑ¸®"));
	printf("%d\n", sizeof(str1));
	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str2, str1));
	printf("%u\n", strchr(str2, 'h'));
	printf("%u\n", strchr(str2, 'e'));
	printf("%u\n", strcspn(str2, "e"));
	return 0;
}