/*
변수 : 데이터를 저장하는 공간
	 : 프로그램을 개발할 때 여러 곳에서 사용하는 "값"을 저장해두고 필요할 때마다 불러다 사용하는 용도
	 : 선언 -> 저장 -> 활용

함수 : 소스코드를 저장하는 공간
	 : 프로그램을 개발할 때 여러 곳에서 사용하는 "코드"를 저장해두고 필요할 때마다 불러다 사용하는 용도
	 : 자주 사용하는 코드를 반복문을 사용해서 동작하도록 할 수 있지만 반복문을 사용할 수 없는 상황도 있음
	 : 반복문 사용이 불가한 자주 사용하는 코드를 저장해주는 역할이 함수
	 
	 1) 선언 : main 위에 
		void 함수이름() {
			code;
			code;
			...
		}
	 
	 2) 호출 : 함수 이름과 ()를 붙여서 사용


	 -- 반환 타입 
	 void: 반환타입이 없음.
*/

// 매개변수 X 반환타입 X 선언 & 호출
#include <stdio.h>

void showIntroduce() {
	printf("<< Introduce Yourself >>\n");
	printf("1. Name: hwanhee\n");
	printf("2. Age: 20\n");
	printf("3. height: 158cm\n");
}

int main() {
	showIntroduce();
	showIntroduce();
	showIntroduce();

	return 0;
}
