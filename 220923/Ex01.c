/*
switch�� case���� break�� �ǵ������� �� ���� ����. 
*/

#include <stdio.h>

int main() {
	printf("===== [ ���Ǳ� ] =====\n");
	printf("1.�ݶ�\n");
	printf("2.�ݶ�\n");
	printf("3. ���̴�\n");
	printf("4. ȯŸ\n");
	printf("5. ź���\n");
	printf("�޴��� �����ϼ��� > ");

	int menu;
	scanf_s("%d", &menu);

	switch (menu) {
		case 1:
		case 2:
			printf("�ݶ�\n");
			break;
		case 3:
			printf("���̴�\n");
			break;
		case 4:
			printf("ȯŸ\n");
			break;
		case 5:
			printf("ź���\n");
			break;
		default:
			printf("��ȣ�� �߸� �Է��ϼ̽��ϴ�.");
	}


	return 0;
}

