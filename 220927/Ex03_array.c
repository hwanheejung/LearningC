/*
===== �迭 =====
- ���� ���� '����'�� �ϳ��� ���� ����
- ���� Ÿ���� �����͵��� �ϳ��� ������ ������ �� ����

- �迭�� ���� : �迭�� ����� �������� ��	=> sizeof(arrayName) / sizeof(int)
- �迭�� ũ�� : �迭�� ����� �������� �� * ������Ÿ�� ũ�� => sizeof(arrayName)

1) �迭 ����
	type arrayName[arrayLength];	
	- arraySize: �迭�� ������ �� �ִ� �������� �� 

2) �迭 ����
	arrayName[idx] = {  ,  ,  };

3) Ȱ��


*/

#include <stdio.h>

int main() {
	// method 1 : �����ϰ� �����ϰ� 
	int std1[3];
	std1[0] = 84;
	std1[1] = 62;
	std1[2] = 55;
	int sum1 = std1[0] + std1[1] + std1[2];

	int std2[3];
	std2[0] = 93;
	std2[1] = 71;
	std2[2] = 80;
	int sum2 = std2[0] + std2[1] + std2[2];

	double avgScore[2];
	avgScore[0] = (double) sum1 / 3;
	avgScore[1] = (double) sum2 / 3;

	printf("student 1 : %lf\n", avgScore[0]);
	printf("student 2 : %lf\n", avgScore[1]);

	// method 2-1 : �����ϸ鼭 ���� 1 (�迭�� ���̸� ��� - ������ arraySize��ŭ�� ���� ����)
	int stu1[3] = { 84, 62, 55 };

	// method 2-2 : �����ϸ鼭 ���� 2 (�迭�� ���� ������� ���� - ������ ������ ������ŭ �ڵ����� arraySize ����)
	int stu2[] = { 93, 71, 80 };


	// �迭�� ũ�� 
	int nums[] = { 10, 9, 8 };
	int size = sizeof(nums);			// �迭�� ũ��
	int length = size / sizeof(int);	// �迭�� ���� 
	
	printf("�迭�� ũ�� => %d\n", size);
	printf("�迭�� ���� => %d\n", length);

	return 0;
}