/*
��ȯŸ���� �ִ� �Լ��� ������ ���� return Ű���带 �ݵ�� ����ؾ� ��.
return ��ȯŸ�Կ� ��ġ�ϴ� ��;
���ư� ���� ���� ������ ���ư�

== �� �ڸ��� ���� �� �ִ� �� == 
1) �� 
2) ���� : ������ ������ �ִ� ���� ���
3) ���� : ��� ������� ��� 
4) ��ȯ Ƽ���� �ִ� �Լ� ȣ�� : return ���� ���

*/

#include <stdio.h>

void func1() {
	printf("��ȯ Ÿ���� ���� func1 �Լ�\n");
}

int func2() {
	printf("��ȯ Ÿ���� int�� func2 �Լ�\n");

	return -97;
}

double func3() {
	printf("��ȯ Ÿ���� double�� func3 �Լ�\n");

	return 3.14;
}


int main() {
	func1();
	int su = func2();
	func3();

	return 0;
}
