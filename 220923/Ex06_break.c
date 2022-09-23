/*
break : break를 감싸고 있는 반복문 한 겹을 빠져나감
	  : break는 if와 함께 사용해서 조건이 됐을 때 반복문을 빠져나가도록 함
	  : while을 if와 break를 사용해서 구현하면 while을 구현하기도 편하고 code 가독성도 많이 향상됨
	  : 따라서 while, (if, break)는 한 세트라고 생각해도 됨

continue : continue를 감싸고 있는 반복문 한 겹의 처음으로 올라감

*/

#include <stdio.h>

int main() {
	int kor = 0;	// n번째 학생의 국어점수
	int sum = 0;	// 모든 학생의 국어점수 총점
	int n = 1;

	while (1) {
		printf("%d. 국어점수 > ", n);
		scanf_s("%d", &kor);

		if (kor != -1) {
			sum = sum + kor;
			n++;
		}
		else {
			printf("국어점수 입력을 마칩니다.\n");
			break;
		}
	}

	printf("\n총점: %d\n", sum);
	printf("평균: %lf\n", (float)sum / (n - 1));


	return 0;
}