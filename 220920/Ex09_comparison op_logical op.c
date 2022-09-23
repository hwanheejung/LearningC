/*
===== 비교연산자 ======
	yes(1) / no(0)
	== : equal
	!= : not equal
	< : less than
	<= : less than or equal to 
	> : greater than
	>= : greater than or equal to 

===== 논리연산자 =====
논리값에서 1은 True, 0은 False를 의미. 
	1) 논리값 && 논리값 : AND
		1 && 1 => 1
		1 && 0 => 0
		0 && 1 => 0
		0 && 0 => 0
	2) 논리값 || 논리값 : OR
		1 || 1 => 1
		1 || 0 => 1
		0 || 1 => 1
		0 || 0 => 0
	3) !논리값 : NOT
		!1 => 0
		!0 => 1
*/

#include <stdio.h>

int main() {
	int num1 = 10;
	int num2 = 20;

	printf("num1 == num2 -> %d\n", num1 == num2);
	printf("num1 != num2 -> %d\n", num1 != num2);
	printf("num1 < num2 -> %d\n", num1 < num2);
	printf("num1 >= num2 -> %d\n", num1 >= num2);

	// AND
	printf("1 && 1 = %d\n", 1 && 1);
	printf("1 && 0 = %d\n", 1 && 0);

	// OR
	printf("1 || 1 = %d\n", 1 || 1);
	printf("0 || 1 = %d\n", 0 || 1);
	printf("1 || 0 = %d\n", 1 || 0);
	printf("0 || 0 = %d\n", 0 || 0);


	return 0;
}
