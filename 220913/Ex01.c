#include <stdio.h>

int main() {
	printf("1. %s\n", "Hello World");			// %s : ���������� 
												// \n : �����, excape sequence / \t : tap
	printf("2. %s %s\n", "first", "second");	// ������ ��� ���� / ������ �°� �����͸� �����ؾ���
	
	/*
	----- ���������� -----
	%d : ���� 
	%lf : �Ǽ�
	%c : ����
	%s : ���ڿ�
	*/

	// ����
	printf("3. %d\n", 3 + 5);

	// �Ǽ�
	printf("4. %lf\n", 3.14);

	// ����
	printf("5. %c\n", 'a');		// ���ڴ� �ݵ�� '' �ȿ� ǥ�� / �ϳ��� ���ڸ� �Է�

	// ���ڿ�
	printf("6. %s\n", "abc");	// ���ڿ��� �ݵ�� "" �ȿ� ǥ��


	return 0;
}

