/*
===== ������ - ����ȯ(type casting) =====
(data type) data;
�Ͻ������� �ٲ�� ��!! ����ϴ� �������� �ٲ�.

10;
(double) 10;	// -> 10.0

3.14;
(int) 3.14;		// -> 3
*/

#include <stdio.h>

int main() {
	int kor = 56;	// ��������
	int eng = 77;	// ��������
	int mat = 87;	// ��������

	int cnt = 3;	// ���� ���� ��

	// kor, eng, mat ������ Ȱ���ؼ� ���� ���
	int sum = kor + eng + mat;
	printf("����: %d\n", sum);

	// ������ cnt ������ Ȱ���ؼ� ��� ���
	double avg = sum / (double)cnt;		// ����ȯ�����ڰ� �켱������ ���� ����. 
	printf("���: %lf\n", avg);
}

