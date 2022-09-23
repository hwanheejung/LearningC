// n명의 국어점수의 총점, 평균 구하는 프로그램
// 프로그램을 종료하려면 -1 입력

#include <stdio.h>

int main() {
	int kor = 0;	// n번째 학생의 국어점수
	int sum = 0;	// 모든 학생의 국어점수 총점
	int n = 1;	

	while (kor != -1) {
		printf("%d. 국어점수 > ", n);
		scanf_s("%d", &kor);

		if (kor != -1) {
			sum = sum + kor;
			n++;
		}
	}

	printf("\n총점: %d\n", sum);
	printf("평균: %lf\n", (float)sum / (n-1));

	return 0;
}