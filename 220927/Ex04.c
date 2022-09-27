/*
구구단 2단의 결과를 배열에 저장하고, 그 배열을 사용해서 구구단 2단을 출력
*/
#include <stdio.h>

int main() {
	int mul[9] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	
	for (int i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, mul[i-1]);

	}


	return 0;
}