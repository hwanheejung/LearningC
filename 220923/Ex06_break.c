/*
break : break�� ���ΰ� �ִ� �ݺ��� �� ���� ��������
	  : break�� if�� �Բ� ����ؼ� ������ ���� �� �ݺ����� ������������ ��
	  : while�� if�� break�� ����ؼ� �����ϸ� while�� �����ϱ⵵ ���ϰ� code �������� ���� ����
	  : ���� while, (if, break)�� �� ��Ʈ��� �����ص� ��

continue : continue�� ���ΰ� �ִ� �ݺ��� �� ���� ó������ �ö�

*/

#include <stdio.h>

int main() {
	int kor = 0;	// n��° �л��� ��������
	int sum = 0;	// ��� �л��� �������� ����
	int n = 1;

	while (1) {
		printf("%d. �������� > ", n);
		scanf_s("%d", &kor);

		if (kor != -1) {
			sum = sum + kor;
			n++;
		}
		else {
			printf("�������� �Է��� ��Ĩ�ϴ�.\n");
			break;
		}
	}

	printf("\n����: %d\n", sum);
	printf("���: %lf\n", (float)sum / (n - 1));


	return 0;
}