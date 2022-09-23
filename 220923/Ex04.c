// 1~10 까지 모두 더한 값을 출력하는 프로그램
#include <stdio.h>

int main() {

	int num = 1;
	int sum = 0;
	while (num <= 10) {
		sum = sum + num;
		num++;
	}
	printf("sum = %d\n", sum);
	return 0;
}