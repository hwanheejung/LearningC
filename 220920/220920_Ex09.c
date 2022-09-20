/*
===== �񱳿����� ======
	yes(1) / no(0)
	== : equal
	!= : not equal
	< : less than
	<= : less than or equal to 
	> : greater than
	>= : greater than or equal to 

===== �������� =====
�������� 1�� True, 0�� False�� �ǹ�. 
	1) ���� && ���� : AND
		1 && 1 => 1
		1 && 0 => 0
		0 && 1 => 0
		0 && 0 => 0
	2) ���� || ���� : OR
		1 || 1 => 1
		1 || 0 => 1
		0 || 1 => 1
		0 || 0 => 0
	3) !���� : NOT
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