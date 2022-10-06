/*
매개변수와 반환타입을 함께 활용해야하는 함수
1) 국어, 영어, 수학 점수를 전달받아 평균을 반환하는 함수
2) 원주율과 반지름을 전달받아 원둘레를 계산해 반환하는 함수
*/

#include <stdio.h>

double avg(int x, int y, int z){
	int sum = x + y + z;
	double average = sum / 3.0;
	return average;
}

double perimeter(int radius) {
	double result = 2 * 3.14 * radius;

	return result;
}

int main() {
	// 1
	int kor, eng, math;
	printf("Korean Score: ");
	scanf_s("%d", &kor);

	printf("English Score: ");
	scanf_s("%d", &eng);

	printf("Math Score: ");
	scanf_s("%d", &math);

	double average = avg(kor, eng, math);
	printf("Average score is [%lf]\n", average);

	// 2
	int r;
	printf("Radius: ");
	scanf_s("%d", &r);
	double per = perimeter(r);
	printf("radius: %d => perimeter : [%lf]\n", r, per);

	return 0;
}