#include <stdio.h>

int main() {
	int running = 1;
	while (running){
		// manual
		printf("<< ~~ ���α׷� >>\n");
		printf("1. ȸ������\n");
		printf("2. �α���\n");
		printf("3. ���̵� ã��\n");
		printf("4. ��й�ȣ ã��\n");
		printf("5. ���α׷� ����\n");
		printf("�޴� ��ȣ �Է� => ");
		//

		int menu;
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("ȸ������\n");
			break;
		case 2:
			printf("�α���\n");
			break;
		case 3:
			printf("���̵� ã��\n");
			break;
		case 4:
			printf("��й�ȣ ã��\n");
			break;
		case 5:
			printf("���α׷��� ����˴ϴ�.\n");
			running = 0;
			break;
		default:
			printf("�޴� ��ȣ�� �߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
	}
	

	return 0;
}