/*
������ 2���� ����� �迭�� �����ϰ�, �� �迭�� ����ؼ� ������ 2���� ���
*/
#include <stdio.h>

int main() {
	int mul[9] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
	
	for (int i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, mul[i-1]);

	}


	return 0;
}