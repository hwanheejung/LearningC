/*
-- practice
���̱ⱸ ž�� ���� ���� : 10�� �̻�, 160cm �̻�
*/
#include <stdio.h>

int main() {
	int age;
	double height;

	printf("age: ");
	scanf_s("%d", &age);

	printf("height: ");
	scanf_s("%lf", &height);

	if (age >= 10 && height >= 160) {
		printf("ž�� ����\n");
	}
	else {
		printf("ž�� �Ұ�\n");
	}

	return 0;
}