/*
if�� else�� �ִ� ����
	: if ���� �ڵ尡 ����ǰų� else ���� �ڵ尡 ����ǰų� 
*/

#include <stdio.h>

int main() {
	// num �Է�
	printf("num: ");
	int num;
	scanf_s("%d", &num);

	// ���ǹ� 
	if (num >= 1 && num <= 5) {
		printf("1 <= num <= 5\n");
	}
	else {
		printf("num is not in (1 <= num <= 5)\n");
	}
	

	return 0;
}