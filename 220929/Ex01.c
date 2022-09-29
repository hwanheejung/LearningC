/*
Review
*/

#include <stdio.h>

int main() {

	int score;
	scanf_s("%d", &score);
	score = score / 10;

	switch (score) {
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");

	}



	return 0;
}