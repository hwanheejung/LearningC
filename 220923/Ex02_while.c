/*
===== �ݺ���: while =====
����:
	while(���ǽ�)
		�ҽ� �ڵ�;
���� ����
	1) ��ǻ�Ͱ� while�� ������ while�� ���ǽ��� Ȯ��
	2) ���ǽ��� true(1)�� while �ȿ� �ִ� �ҽ� �ڵ尡 ����
	3. while �ȿ� �ִ� �ҽ� �ڵ带 �����Ű�� while �� ���� ������ �ٽ� while�� ���ư�.
*/

#include <stdio.h>

int main() {
	// count������ 1���� �����ؼ�
	int count = 1;
	
	// count������ 3 ������ ����
	while (count <= 3) {
		printf("%d. Hello World!\n", count);
		
		// count������ �ϳ��� ������Ű�鼭 while ���� �ڵ带 �ݺ������� ����
		count++;
	}
	
	// num ������ 10���� �����ؼ� �ϳ��� ����
	int num = 10;
	while (num >= 1) {
		printf("num = %d\n", num);
		num--;
	}
		// while ������ ������ �� num�� 0

	return 0;
}