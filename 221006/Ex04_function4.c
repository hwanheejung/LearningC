/*
반환타입이 있는 함수를 선언할 때는 return 키워드를 반드시 사용해야 함.
return 반환타입에 일치하는 값;
돌아갈 때는 값을 가지고 돌아감

== 값 자리에 넣을 수 있는 것 == 
1) 값 
2) 변수 : 변수가 가지고 있는 값을 사용
3) 계산식 : 계산 결과값을 사용 
4) 반환 티입이 있는 함수 호출 : return 값을 사용

*/

#include <stdio.h>

void func1() {
	printf("반환 타입이 없는 func1 함수\n");
}

int func2() {
	printf("반환 타입이 int인 func2 함수\n");

	return -97;
}

double func3() {
	printf("반환 타입이 double인 func3 함수\n");

	return 3.14;
}


int main() {
	func1();
	int su = func2();
	func3();

	return 0;
}
