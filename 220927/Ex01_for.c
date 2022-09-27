/*
===== 반복문 : for ===== 
형태: 
	for(초기식; 조건식; 증감식) {
		소스코드;
	}

동작 과정: 
	1) 초기식 실행
	2) 조건식 실행
	3-1) 조건식이 True면 소스코드 실행
	3-2) 조건식이 False면 for를 빠져나옴
	4) 3-2 이후 for의 끝을 만나면, 올라와서 증감식 실행
	5) 2부터 반복

*/

#include <stdio.h>

int main() {
	
	printf("=== Hello World~! 3번 출력 ===\n");
	for (int num = 1; num <= 3; num++) {
		printf("Hello World~!\n");
	}
	printf("\n");
	

	printf("=== 10부터 1까지 출력 ===\n");
	for (int num = 10; num >= 1; num--) {
		printf("%d\n", num);
	}
	printf("\n");


	printf("=== 구구단 2단 출력 ===\n");
	for (int i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}
	printf("\n");


	printf("=== 구구단(2~9단) 출력 sol1 ===\n");
	for (int i = 2; i <= 9; i++) {
		printf(" -- %d단 --\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	printf("\n");


	printf("=== 구구단(2~9단) 출력 sol2 ===\n");
	for (int i = 2; i <= 8; i++) {
		printf("<%d단>	        ", i);
	}
	printf("<9단>\n");

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d * %d = %d	", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}