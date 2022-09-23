/*
break : break�� ���ΰ� �ִ� �ݺ��� �� ���� ��������
	  : break�� if�� �Բ� ����ؼ� ������ ���� �� �ݺ����� ������������ ��
	  : while�� if�� break�� ����ؼ� �����ϸ� while�� �����ϱ⵵ ���ϰ� code �������� ���� ����
	  : ���� while, (if, break)�� �� ��Ʈ��� �����ص� ��

continue : continue�� ���ΰ� �ִ� �ݺ��� �� ���� ó������ �ö�
		 : �Ϲ������� ��� X

*/

// Ȧ���� ����ϴ� ���α׷�
#include <stdio.h>

int main() {
	int n = 1;

	/*
	while (n <= 10) {
		if (n % 2 == 1) {
			printf("%d\n", n);
		}
		n++;
	}
	*/

	while (n <= 10) {
		if (n % 2 == 0) {
			n++;
			continue;
		}
		printf("%d\n", n);
		n++;
	}

	return 0;
}