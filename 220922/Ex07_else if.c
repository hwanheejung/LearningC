/*
- if, else if �� �ִ� ���� 
	: if ���� �ڵ尡 ����ǰų�, n��° else if ���� �ڵ尡 ����ǰų�, �ƹ��͵� ������� �ʰų�

- if�� ����� ������ if, else if�� ����� ������ ����
	1) if �� ����� ����
		: ������ n�� �񱳰� �Ͼ
	2) if, else if�� ����� ����
		: ���� ������������ ����. �ִ� n�� �񱳰� �Ͼ.  

- if�� else if�� else�� �ִ� ���ǹ��� ����
	: if ���� �ڵ尡 ����ǰų�, n��° else if ���� �ڵ尡 ����ǰų�, else ���� �ڵ尡 ����ǰų�

*/

#include <stdio.h>

int main() {
	int num = 2;
	
	if (num == 1) {
		printf("num is 1.\n");
	} 
	else if (num == 2) {
		printf("num is 2.\n");
	}
	else if (num == 3) {
		printf("num is 3.\n");
	}

	return 0;
}