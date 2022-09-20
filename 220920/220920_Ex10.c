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
	
	// 비교연산자가 논리연산자보다 우선순위가 높음 -> 괄호 없어도 정상동작

	return 0;
}
