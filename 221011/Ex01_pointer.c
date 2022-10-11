/*
what is "pointer"?

* : asterisk
형식지정자: %p 

메모리 주소를 표현하는 방법: &변수이름;
메모리 주소를 표인터 변수에 저장: 포인터변수이름 = &변수이름;

*/


#include <stdio.h>

int main() {
	int var1 = 10;
	// var1의 메모리 주소: &var1
	printf("var1 변수의 메모리 주소: %p\n", &var1);

	// 해석: (정수가 저장된 공간의 메모리 주소)를 저장할 수 있는 var2 변수
	// => read: int형 포인터 변수 var2
	int* var2 = &var1;
	printf("var2가 가지고 있는 var1 변수의 메모리 주소: %p\n", var2);

	// 해석: (실수가 저장된 공간의 메모리 주소)를 저장할 수 있는 var3 변수
	double var3;
	double* var4 = &var3;
	printf("var4가 가지고 있는 var3 변수의 메모리 주소: %p\n", var4);

	// 해석: (문자가 저장된 공간의 메모리 주소)를 저장할 수 있는 var4 변수 
	char var5;
	char* var6 = &var5;
	printf("var6이 가지고 있는 var5 변수의 메모리 주소: %p\n", var6);

	return 0;
}