/*
===== ���������� =====
���� ���� ������ 
	: ���������ڸ� ���� �ڿ� ���
	: ������ Ȱ���� �Ŀ� ������ ����ִ� ���� ��,����Ŵ.
	num++
	num--

���� ���� ������
	: ���������ڸ� ���� �տ� ���
	: ������ Ȱ���ϱ� ���� ������ ����ִ� ���� ��,����Ŵ.
	++num
	--num
*/


#include <stdio.h>

int main() {
	int num = 1;

	// num = num + 1;
	num++;		
	printf("num = %d\n", num);	// 2

	// num = num - 1;
	num--;	// 1
	printf("num = %d\n", num);

	// -----����������, ���������� difference----- //
	int num1 = 1;
	int num2 = 1;

	int res1 = ++num1;		// num1�� 1�� ���� -> res1�� ���� / res1 = 2, num1 = 2
	int res2 = num2++;		// num2�� 1�� res2�� ���� -> num2 + 1 = 2 / res2 = 1, num2 = 2
	printf("res1 = %d\n", num1);
	printf("res2 = %d\n", res2);


	return 0;	


}