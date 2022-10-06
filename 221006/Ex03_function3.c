/*
showEvenOrOdd: ����ڿ��� �Է¹��� ���� ¦���� "Even" ���, Ȧ���� "Odd" ���
mulTable: �Ű������� ���޹��� ���� �´� �������� ����ϴ� �Լ�
btw: �Ű������� �� ������ ���޹޾� �� ���� ������ ������ ����ϴ� �Լ� 
*/

#include <stdio.h>

void showEvenOrOdd(int n) {
	if (n % 2 == 0) {
		printf("Even\n\n");
	}
	else {
		printf("Odd\n\n");
	}
}

void mulTable(int n) {
	printf("===== [%d] Times Table =====\n", n);
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}
	printf("\n");
}

void btw(int x, int y) {
	if (x > y) {
		int temp = x;
		x = y;
		y = temp;
	}

	if (y - x == 1) {
		printf("There is no integer between two numbers.\n");
	}
	else {
		printf("===== Numbers between %d and %d are =====\n", x, y);
		for (int i = x + 1; i < y; i++) {
			printf("%d\n", i);
		}
		printf("\n");
	}
	
}

int main() {
	int num;
	printf("num: ");
	scanf_s("%d", &num);
	showEvenOrOdd(num);

	int times;
	printf("[] times table => ");
	scanf_s("%d", &times);
	mulTable(times);

	int a, b;
	printf("Enter 2 numbers => ");
	scanf_s("%d %d", &a, &b);
	btw(a, b);

	return 0;
}