/*
what is "Structure Type(����ü)"?
	����� ���� ���� ���� Ÿ��
	����ü ����: struct

address(name)	value
-----------------------------
#1(var1)		���� ����
#2(var2)		���� ����
				�Ǽ� ����
				���� ����
*/

#include <stdio.h>

struct Ex {
	int a;
	double b;
	char c;

};

int main() {
	struct Ex var1;
	var1.a = 4;
	var1.b = 3.14;
	var1.c = 'a';

	return 0;
}