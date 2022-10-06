/*
매개변수 O 반환타입 X 선언 & 호출
	: 매개변수의 개수와 타입에 맞춰서 값을 넣어줘야 함

	void func(인자){
	}
*/

#include <stdio.h>

void func1() {
	printf("매개변수가 없는 func1 함수 호출\n");
}

void printa(int a) {
	printf("a = %d\n", a);
}

void plus(int x, int y) {
	printf("%d + %d = %d\n", x, y, x + y);

}

void div(double x, int y) {
	printf("%lf / %d = %lf\n", x, y, x / y);

}

int main() {
	func1();
	printa(30);
	plus(10, 20);
	div(6.66, 3);

	return 0;
}