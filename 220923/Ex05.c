// n���� ���������� ����, ��� ���ϴ� ���α׷�
// ���α׷��� �����Ϸ��� -1 �Է�

#include <stdio.h>

int main() {
	int kor = 0;	// n��° �л��� ��������
	int sum = 0;	// ��� �л��� �������� ����
	int n = 1;	

	while (kor != -1) {
		printf("%d. �������� > ", n);
		scanf_s("%d", &kor);

		if (kor != -1) {
			sum = sum + kor;
			n++;
		}
	}

	printf("\n����: %d\n", sum);
	printf("���: %lf\n", (float)sum / (n-1));

	return 0;
}