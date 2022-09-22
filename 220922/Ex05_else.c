/*
if와 else가 있는 구조
	: if 안의 코드가 실행되거나 else 안의 코드가 실행되거나 
*/

#include <stdio.h>

int main() {
	// num 입력
	printf("num: ");
	int num;
	scanf_s("%d", &num);

	// 조건문 
	if (num >= 1 && num <= 5) {
		printf("1 <= num <= 5\n");
	}
	else {
		printf("num is not in (1 <= num <= 5)\n");
	}
	

	return 0;
}