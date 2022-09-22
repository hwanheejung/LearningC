/*
===== 비트 연산자 =====
& : 비트 AND
| : 비트 OR
^ : 비트 XOR
~ : 비트 NOT
<< : left shift
>> : right shift

*/

#include <stdio.h>

int main() {
	printf("22 & 15 = %d\n", 22 & 15);
	/* &
	22 -> 1 0 1 1 0 
	15 -> 0 1 1 1 1
	---------------
	      0 0 1 1 0 -> 6
	*/

	printf("22 | 15 = %d\n", 22 | 15);
	printf("22 ^ 15 = %d\n", 22 ^ 15);
	printf("~22 = %d\n", ~22);
	printf("22 >> 2 = %d\n", 22 >> 2);
	printf("22 << 15 = %d\n", 22 << 2);


	return 0;
}