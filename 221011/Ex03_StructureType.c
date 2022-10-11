/*
what is "Structure Type(구조체)"?
	사용자 정의 정보 저장 타입
	구조체 선언: struct

address(name)	value
-----------------------------
#1(var1)		정수 저장
#2(var2)		정수 저장
				실수 저장
				문자 저장
*/

#include <stdio.h>

struct Ex {
	int a;
	double b;
	char c;

};

int main() {
	struct Ex var1;
	var1.a = 4;
	var1.b = 3.14;
	var1.c = 'a';

	return 0;
}