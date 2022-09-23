/*
===== 반복문: while =====
형태:
	while(조건식)
		소스 코드;
동작 과정
	1) 컴퓨터가 while을 만나면 while의 조건식을 확인
	2) 조건식이 true(1)면 while 안에 있는 소스 코드가 실형
	3. while 안에 있는 소스 코드를 실행시키다 while 의 끝을 만나면 다시 while로 돌아감.
*/

#include <stdio.h>

int main() {
	// count변수가 1부터 시작해서
	int count = 1;
	
	// count변수가 3 이하일 동안
	while (count <= 3) {
		printf("%d. Hello World!\n", count);
		
		// count변수를 하나씩 증가시키면서 while 안의 코드를 반복적으로 실행
		count++;
	}
	
	// num 변수가 10부터 시작해서 하나씩 감소
	int num = 10;
	while (num >= 1) {
		printf("num = %d\n", num);
		num--;
	}
		// while 변수를 나왔을 때 num은 0

	return 0;
}