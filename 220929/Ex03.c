#include <stdio.h>

int main() {
	char str1[] = "Hello";
	char str2[] = "¾È³çÇÏ¼¼¿ä";

	printf("length of str1 => %d\n", sizeof(str1));
	printf("length of str2 => %d\n", sizeof(str2));

	return 0;
}