/*
===== 연산자 - 형변환(type casting) =====
(data type) data;
일시적으로 바뀌는 것!! 사용하는 순간에만 바뀜.

10;
(double) 10;	// -> 10.0

3.14;
(int) 3.14;		// -> 3
*/

#include <stdio.h>

int main() {
	int kor = 56;	// 국어점수
	int eng = 77;	// 영어점수
	int mat = 87;	// 수학점수

	int cnt = 3;	// 시험 과목 수

	// kor, eng, mat 변수를 활용해서 총점 계산
	int sum = kor + eng + mat;
	printf("총점: %d\n", sum);

	// 총점과 cnt 변수를 활용해서 평균 계산
	double avg = sum / (double)cnt;		// 형변환연산자가 우선순위가 가장 높음. 
	printf("평균: %lf\n", avg);
}

