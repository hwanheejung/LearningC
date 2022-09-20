/*
/ : 나눗셈
	- 덧셈, 뺄셈, 곱셈에서는 정수와 정수의 계산의 결과값은 항상 정수이다. 
	- 나눗셈은 아니지만, 컴퓨터는 정수 / 정수의 결과를 무조건 정수로 구해준다. -> 7 / 2 = 3
	- 따라서, 나눗셈의 결과를 실수값으로 구하고 싶으면, 실수 / 실수 를 해야한다. 

	- 또는 분모나 분자 중 하나만 실수여도 됨 -> 7.0 / 2 
*/

#include <stdio.h>

int main() {
	printf("6 / 2 = %d\n", 6 / 2);		
	printf("7 / 2 = %lf\n", 7.0 / 2.0);	
	
	double num1, num2;
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);

	return 0;
}