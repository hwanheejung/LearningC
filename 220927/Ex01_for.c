/*
===== �ݺ��� : for ===== 
����: 
	for(�ʱ��; ���ǽ�; ������) {
		�ҽ��ڵ�;
	}

���� ����: 
	1) �ʱ�� ����
	2) ���ǽ� ����
	3-1) ���ǽ��� True�� �ҽ��ڵ� ����
	3-2) ���ǽ��� False�� for�� ��������
	4) 3-2 ���� for�� ���� ������, �ö�ͼ� ������ ����
	5) 2���� �ݺ�

*/

#include <stdio.h>

int main() {
	
	printf("=== Hello World~! 3�� ��� ===\n");
	for (int num = 1; num <= 3; num++) {
		printf("Hello World~!\n");
	}
	printf("\n");
	

	printf("=== 10���� 1���� ��� ===\n");
	for (int num = 10; num >= 1; num--) {
		printf("%d\n", num);
	}
	printf("\n");


	printf("=== ������ 2�� ��� ===\n");
	for (int i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}
	printf("\n");


	printf("=== ������(2~9��) ��� sol1 ===\n");
	for (int i = 2; i <= 9; i++) {
		printf(" -- %d�� --\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	printf("\n");


	printf("=== ������(2~9��) ��� sol2 ===\n");
	for (int i = 2; i <= 8; i++) {
		printf("<%d��>	        ", i);
	}
	printf("<9��>\n");

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d * %d = %d	", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}