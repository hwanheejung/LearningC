#include <stdio.h>

int main() {
	printf("1. %s\n", "Hello World");			// %s : 형식지정자 
												// \n : 제어문자, excape sequence / \t : tap
	printf("2. %s %s\n", "first", "second");	// 여러개 사용 가능 / 개수에 맞게 데이터를 나열해야함
	
	/*
	----- 형식지정자 -----
	%d : 정수 
	%lf : 실수
	%c : 문자
	%s : 문자열
	*/

	// 정수
	printf("3. %d\n", 3 + 5);

	// 실수
	printf("4. %lf\n", 3.14);

	// 문자
	printf("5. %c\n", 'a');		// 문자는 반드시 '' 안에 표현 / 하나의 문자만 입력

	// 문자열
	printf("6. %s\n", "abc");	// 문자열은 반드시 "" 안에 표현


	return 0;
}

