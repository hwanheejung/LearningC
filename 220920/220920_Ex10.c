#include <stdio.h>

int main() {
	/*
	논리 연산자의 값 자리에 비교 연산자를 사용.
	왜? 비교 연산의 결과가 논리값이므로
	*/

	printf("1 ~ 10 사의 정수 입력: ");

	int num;
	scanf_s("%d", &num);

	int res = (num > 3) && (num < 7);
	printf("3 < num < 7 => %d\n", res);


	return 0;
}