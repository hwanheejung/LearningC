/*
===== if ���ǹ� =====
����:
	if(���ǽ�)
		�ҽ��ڵ�;

���ǽĿ� �� �� �ִ� ��:
	1) ����
	- if�� �ȿ� �ִ� �ڵ带 �����Ű�� ������ '0�� �ƴ� ��(True)'�� ����
	- ��ǻ�Ϳ��� True�� 1�̹Ƿ�, ��Ȯ�ϰԴ� 1�� �Է��ؾ� ��
	- if�� �ȿ� '0(False)'�� ������ ���� X 
	- if (1)�� python���� if True: 
	2) �񱳿�����
	3) ��������
*/

#include <stdio.h>

int main() {
	
	if (1)
	printf("run");
	
	int num;
	printf("num: ");
	scanf_s("%d", &num);

	if (num >= 10)
		printf("%d >= 10\n", num);

	if (num >= 0)
		printf("%d >= 0\n", num);


	if (num >= 0 && num <= 10)
		printf("0 <= %d <= 10\n", num);

	return 0;
}