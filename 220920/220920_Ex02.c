#include <stdio.h>

int main() {
	// �Ǽ� 
	double height1;
	double height2;

	printf("ö���� Ű �Է� -> ");
	scanf_s("%lf", &height1);

	printf("������ Ű �Է� -> ");
	scanf_s("%lf", &height2);

	printf("ö���� Ű�� %lf�̰�, ������ Ű�� %lf�Դϴ�.\n", height1, height2);

	// ����
	char val;
	scanf_s("%c", &val, 1);
	/* 1�� ��: 
	����ڰ� �׻� �����ڰ� ���ϴ´�θ� �Է������� ������, 
	���ڸ� �Է¹��� �� ���ڿ��� �Է��ߴٸ� ���ڿ� �� ���� �ϳ��� �����Ͷ� 
	*/

	return 0;
}