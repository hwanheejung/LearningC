#include <stdio.h>

int main() {
	/*
	�� �������� �� �ڸ��� �� �����ڸ� ���.
	��? �� ������ ����� �����̹Ƿ�
	*/

	printf("1 ~ 10 ���� ���� �Է�: ");

	int num;
	scanf_s("%d", &num);

	int res = (num > 3) && (num < 7);
	printf("3 < num < 7 => %d\n", res);


	return 0;
}