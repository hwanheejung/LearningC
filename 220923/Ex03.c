// while문 연습


#include <stdio.h>

int main() {
	/*
	output:
	2
	4
	6
	8
	10
	*/
	printf("===== [ sol 1 : using multiplication ] =====\n");
	int num = 1;

	while (num <= 5) {
		printf("%d\n", num * 2);
		num++;
	}

	printf("\n");
	printf("===== [ sol 2 : using MOD ] =====\n");

	int n = 1;
	while (n <= 10) {
		if (n % 2 == 0) {
			printf("%d\n", n);
		}
		n++;
	}

	printf("\n");
	printf("===== [ 구구단 2단 출력 ] =====\n");

	int x = 1;
	while (x <= 9) {
		printf("2 * %d = %d\n", x, 2 * x);
		x++;
	}


	printf("\n");
	printf("===== [ 구구단 2단 ~ 9단 출력 ] =====\n");
	
	int a = 2;
	int b = 1;
	while (a <= 9) {
		printf("[ %d단 ]\n", a);
		while (b <= 9) {
			printf("%d * %d = %d\n", a, b, a * b);
			b++;
		}
		a++;
		b = 1;
	}

	return 0;
}