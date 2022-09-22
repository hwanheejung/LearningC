/*
- if, else if 가 있는 구조 
	: if 안의 코드가 실행되거나, n번째 else if 안의 코드가 실행되거나, 아무것도 실행되지 않거나

- if만 사용한 구조와 if, else if를 사용한 구조의 차이
	1) if 만 사용한 구조
		: 무조건 n번 비교가 일어남
	2) if, else if를 사용한 구조
		: 참을 만날때까지만 실행. 최대 n번 비교가 일어남.  

- if와 else if와 else가 있는 조건문의 구조
	: if 안의 코드가 실행되거나, n번째 else if 안의 코드가 실행되거나, else 안의 코드가 실행되거나

*/

#include <stdio.h>

int main() {
	int num = 2;
	
	if (num == 1) {
		printf("num is 1.\n");
	} 
	else if (num == 2) {
		printf("num is 2.\n");
	}
	else if (num == 3) {
		printf("num is 3.\n");
	}

	return 0;
}