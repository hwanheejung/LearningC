// 1~10 ���� ��� ���� ���� ����ϴ� ���α׷�
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