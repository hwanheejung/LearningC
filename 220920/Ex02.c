#include <stdio.h>

int main() {
	// 실수 
	double height1;
	double height2;

	printf("철수의 키 입력 -> ");
	scanf_s("%lf", &height1);

	printf("영희의 키 입력 -> ");
	scanf_s("%lf", &height2);

	printf("철수의 키는 %lf이고, 영희의 키는 %lf입니다.\n", height1, height2);

	// 문자
	char val;
	scanf_s("%c", &val, 1);
	/* 1의 뜻: 
	사용자가 항상 개발자가 원하는대로만 입력하지는 않으니, 
	문자를 입력받을 때 문자열을 입력했다면 문자열 내 문자 하나만 가져와라 
	*/

	return 0;
}
