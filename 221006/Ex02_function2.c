/*
�Ű����� O ��ȯŸ�� X ���� & ȣ��
	: �Ű������� ������ Ÿ�Կ� ���缭 ���� �־���� ��

	void func(����){
	}
*/

#include <stdio.h>

void func1() {
	printf("�Ű������� ���� func1 �Լ� ȣ��\n");
}

void printa(int a) {
	printf("a = %d\n", a);
}

void plus(int x, int y) {
	printf("%d + %d = %d\n", x, y, x + y);

}

void div(double x, int y) {
	printf("%lf / %d = %lf\n", x, y, x / y);

}

int main() {
	func1();
	printa(30);
	plus(10, 20);
	div(6.66, 3);

	return 0;
}