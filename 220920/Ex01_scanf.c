/*
===== scanf_s =====
	입력해야할 것들:
	1. 사용자가 입력할 데이터의 타입
	2. 사용자가 입력한 값을 저장할 변수

	동작 순서
	1. 사용자의 입력을 기다린다. -> 사용자는 형식지정자에 맞는 값을 입력하고 Enter 
	2. 사용자가 입력한 값을 변수에 저장
*/

#include <stdio.h>

int main() {
	int val;
	scanf_s("%d", &val);	 // 사용자가 입력할 값(int)을 val에 저장하라
	
	printf("사용자가 입력한 값은 %d입니다.", val);


	return 0;
}
