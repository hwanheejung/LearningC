/*
what is "pointer"?

* : asterisk
����������: %p 

�޸� �ּҸ� ǥ���ϴ� ���: &�����̸�;
�޸� �ּҸ� ǥ���� ������ ����: �����ͺ����̸� = &�����̸�;

*/


#include <stdio.h>

int main() {
	int var1 = 10;
	// var1�� �޸� �ּ�: &var1
	printf("var1 ������ �޸� �ּ�: %p\n", &var1);

	// �ؼ�: (������ ����� ������ �޸� �ּ�)�� ������ �� �ִ� var2 ����
	// => read: int�� ������ ���� var2
	int* var2 = &var1;
	printf("var2�� ������ �ִ� var1 ������ �޸� �ּ�: %p\n", var2);

	// �ؼ�: (�Ǽ��� ����� ������ �޸� �ּ�)�� ������ �� �ִ� var3 ����
	double var3;
	double* var4 = &var3;
	printf("var4�� ������ �ִ� var3 ������ �޸� �ּ�: %p\n", var4);

	// �ؼ�: (���ڰ� ����� ������ �޸� �ּ�)�� ������ �� �ִ� var4 ���� 
	char var5;
	char* var6 = &var5;
	printf("var6�� ������ �ִ� var5 ������ �޸� �ּ�: %p\n", var6);

	return 0;
}