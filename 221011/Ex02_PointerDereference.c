/*
address(name)	value
-----------------
#1(num)			10
#2(ptr)			#1

&num = #1
&ptr = &2
ptr = #1
*ptr = 10

pointer 정리
-> 포인터 변수 선언
	- datatype* 변수이름;
	- datatype이(가) 저장된 공간의 메모리 주소를 저장할 수 있는 변수
	- datatype 형 포인터 변수

-> 메모리 주소 표현 방법 & 포인터 변수에 값(메모리 주소) 저장
	- 메모리 주소 표현 방법: &변수이름
	- 포인터 변수에 값 저장: 포인터변수 이름 = &변수이름

-> 포인터 변수 역참조
	- *포인터변수이름: 포인터 변수가 참조하고 있는 공간 안으로 들어감
 
*/

#include <stdio.h>

int main() {
	int num = 10;
	int* ptr = &num;

	printf("num 변수의 메모리 주소(num 사용): %p\n", &num);
	printf("num 변수의 메모리 주소(ptr 사용): %p\n", ptr);

	// num = 20;
	*ptr = 20;

	printf("num 변수에 저장된 값(num 사용): %d\n", num);
	printf("num 변수에 저장된 값(ptr 사용): %d\n", *ptr);


	return 0;
}
