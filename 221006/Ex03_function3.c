/*
showEvenOrOdd: 사용자에게 입력받은 수가 짝수면 "Even" 출력, 홀수면 "Odd" 출력
mulTable: 매개변수로 전달받은 값에 맞는 구구단을 출력하는 함수
btw: 매개변수로 두 정수를 전달받아 두 정수 사이의 정수를 출력하는 함수 
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