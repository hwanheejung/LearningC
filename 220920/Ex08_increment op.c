/*
===== 증감연산자 =====
후위 증감 연산자 
	: 증감연산자를 변수 뒤에 사용
	: 변수를 활용한 후에 변수에 들어있는 값을 증,감시킴.
	num++
	num--

전위 증감 연산자
	: 증감연산자를 변수 앞에 사용
	: 변수를 활용하기 전에 변수에 들어있는 값을 증,감시킴.
	++num
	--num
*/


#include <stdio.h>

int main() {
	int num = 1;

	// num = num + 1;
	num++;		
	printf("num = %d\n", num);	// 2

	// num = num - 1;
	num--;	// 1
	printf("num = %d\n", num);

	// -----전위증감자, 후위증감자 difference----- //
	int num1 = 1;
	int num2 = 1;

	int res1 = ++num1;		// num1에 1을 더함 -> res1에 대입 / res1 = 2, num1 = 2
	int res2 = num2++;		// num2의 1을 res2에 대입 -> num2 + 1 = 2 / res2 = 1, num2 = 2
	printf("res1 = %d\n", num1);
	printf("res2 = %d\n", res2);


	return 0;	


}
