/*
�Ű������� ��ȯŸ���� �Բ� Ȱ���ؾ��ϴ� �Լ�
1) ����, ����, ���� ������ ���޹޾� ����� ��ȯ�ϴ� �Լ�
2) �������� �������� ���޹޾� ���ѷ��� ����� ��ȯ�ϴ� �Լ�
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