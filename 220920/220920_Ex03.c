/*
===== 연산자 =====
	산술/ 대입/ 논리/ 비교/ 증감/ 비트/ 삼항


cf) 값 자리에 올 수 있는 것
	1) 값
	2) 변수 : 변수가 가지고 있는 값을 사용
	3) 계산식 : 계산의 결과값을 사용
*/

#include <stdio.h>

int main() {
	printf("%d\n", 10 + 20);
	
	int num = 10 - 20;
	int val1 = 10;
	int num2 = val1 * 20; 
	int val2 = 20;
	int num3 = val1 / val2;

	printf("%d\n", num);
	printf("%d\n", num2);
	printf("%d\n", num3);


	return 0;
}