/*
- ����:
	switch(��){
		case ��1:
			�ڵ�
			break;
		case ��2:
			�ڵ�
			break;
		...
	}
- switch�� ������ ���� �´� case�� �۵���. 
- �� �ڸ��� ���� �� �ִ� ��: ����, ����

- break�� ������ ��ǻ�� ���忡���� ��� ������ ��.
- default: case�� ���� ���� ������ ���� ��� Ű����
*/

#include <stdio.h>

int main() {
	// manual
	printf("<< ~~ ���α׷� >>\n");
	printf("1. ȸ������\n");
	printf("2. �α���\n");
	printf("3. ���̵� ã��\n");
	printf("4. ��й�ȣ ã��\n");
	printf("�޴� ��ȣ �Է� => ");
	//

	int menu;
	scanf_s("%d", &menu);

	switch (menu) {
		case 1:
			printf("ȸ������");
			break;
		case 2:
			printf("�α���");
			break;
		case 3:
			printf("���̵� ã��");
			break;
		case 4:
			printf("��й�ȣ ã��");
			break;
		default: 
			printf("�޴� ��ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");
			break;
	}

	return 0;
}