/*
===== ��Ʈ ������ =====
& : ��Ʈ AND
| : ��Ʈ OR
^ : ��Ʈ XOR
~ : ��Ʈ NOT
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