/*
-- practice
���������� A~F������ �������� �ٲ��ִ� ���α׷� 

������ ����ڿ��� �Է¹ް�, 
������ 0~59 : F, 60~69: D, 70~79: C, 80~89: B, 90~100: A

*/

#include <stdio.h>

int main() {
	printf("Math score: ");
	int math;
	scanf_s("%d", &math);
	char grade;

	if (math < 0 && math > 100) {
		printf("You entered the wrong score.\n");
	}
	else if (math >= 90) {
		grade = 'A';
	}
	else if (math >= 80) {
		grade = 'B';
	}
	else if (math >= 70) {
		grade = 'C';
	}
	else if (math >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	printf("Grade: %c", grade);



	return 0;
}