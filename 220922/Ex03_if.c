/*
===== if 조건문 =====
형태:
	if(조건식)
		소스코드;

조건식에 올 수 있는 것:
	1) 논리값
	- if문 안에 있는 코드를 실행시키고 싶으면 '0이 아닌 값(True)'을 넣음
	- 컴퓨터에서 True는 1이므로, 정확하게는 1을 입력해야 함
	- if문 안에 '0(False)'을 넣으면 실행 X 
	- if (1)은 python에서 if True: 
	2) 비교연산자
	3) 논리연산자
*/

#include <stdio.h>

int main() {
	
	if (1)
	printf("run");
	
	int num;
	printf("num: ");
	scanf_s("%d", &num);

	if (num >= 10)
		printf("%d >= 10\n", num);

	if (num >= 0)
		printf("%d >= 0\n", num);


	if (num >= 0 && num <= 10)
		printf("0 <= %d <= 10\n", num);

	return 0;
}