/*
-- practice
놀이기구 탑승 가능 조건 : 10세 이상, 160cm 이상
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
		printf("탑승 가능\n");
	}
	else {
		printf("탑승 불가\n");
	}

	return 0;
}