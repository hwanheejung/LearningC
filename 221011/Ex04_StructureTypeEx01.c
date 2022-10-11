/*
2차원 공간의 한 점에 대한 정보 (x, y좌표)를 저장하려고 한다. 
x, y좌표는 정수이다. 
2차원 공간의 한 점에 대한 정보를 저장할 수 있는 구조체를 선언하세요
*/

#include <stdio.h>

struct graph {
	int x;
	int y;
};

int main() {
	struct graph A;
	struct graph B;

	A.x = 5;
	A.y = 4;

	B.x = 6;
	B.y = 2;

	return 0;
}