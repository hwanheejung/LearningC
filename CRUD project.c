/*
CRUD project
Create(ȸ������) / Read(ȸ������ ��ȸ) / Update(ȸ������ ����) / Delete(ȸ������ ����)
<< before Log-in >>
-> Log-in : ȸ������ �� �Է��ߴ� ���̵�� ����� �Է��ϰ� ������ ����, Ʋ���� ����
-> Sign-up : ȸ�� ������ ���α׷��� �����ϴ� ��
-> Forgot ID?
-> Forgot PW?

<< after Log-in>>
-> Member Information Inquiry
-> Change info : ������ ȸ�� ������ ���ο� ȸ�� ������ ������ �� (update)
-> Delete account : Ż���� ȸ���� ���� ���� / ��쿡 ���� Ż�� ���Ŀ� �ִ� ��� ȸ������ ������ ������ �� ĭ�� ���.(��������)
											  ��ܾߵǴ� ��Ȳ: ��������Ʈ�� ����ؼ� �����͸� �������� ���
-> Log-out
*/


#include <stdio.h>
#include <string.h>		

int main() {
	int running = 1;	// running�� while�� ���ǽ����� �����̹Ƿ� 1�� �ƴ� true�� �����ϴ� ��

	char idList[3][10];		// 3�� ���� 9�ھ�
	char pwList[3][13];		// 3�� ���� 12�ھ�
	char nameList[3][7];	// 3�� ���� 6�ھ� (�ѱ� 3��)

	char id[10];
	char pw[13];
	char name[7];

	int members = 0;		// ���� ������ ȸ���� �� and sign-up �� �� �� �ε����� ȸ�������� �������� ������ ��
	int exist;

	int loginSuccess = 0;		// �α��� ���� ����
	char loginUserName[14];		// �α��� �������� �� �α����� ���� �̸�

	while (running) {
		printf("\n========================\n");
		printf("===== CRUD project =====\n");

		if (loginSuccess == 1) {
			// �α��� ���� �� �α��� �� ȭ�� ���
			// �׿� �´� ����� �����ϵ��� �ڵ带 ����
			printf("Welcome %s!\n", loginUserName);
			printf("\n<< After logged-in >>\n");
			printf("1. Member Information Inquiry\n");
			printf("2. Change info\n");
			printf("3. Delete Account\n");
			printf("4. Log-out\n");
			printf("5. End\n");
			printf("Select Menu => ");

			int menu;
			scanf_s("%d", &menu);

			switch (menu) {
			case 1:
				printf("\n<< Member Information Inquiry >>\n");
				// n��° �������� ������ �������� ���ʴ�� �����ؼ�
				// n��° ������ ���̵�, ���, �̸� ���

				for (int i = 0; i < members; i++) {
					printf("\n<< %d��° ȸ�� ���� ���� >>\n", i + 1);
					printf("ID => %s\n", idList[i]);
					printf("PW => %s\n", pwList[i]);
					printf("NAME => %s\n", nameList[i]);
				}

				break;

			case 2:
				printf("\n<< Change info >>\n");

				// ������ ������ ȸ���� ���̵� �Է¹޴´�
				printf("Enter your ID => ");
				scanf_s("%s", id, 10);
				
				// �ش� ���̵��� ������ �ִ��� ã�´�
				exist = 0;
				for (int i = 0; i < members; i++) {
					if (strcmp(idList[i], id) == 0) {
						exist = 1;
					}
				}

				if (exist) {
				// �ִٸ� ������ ����� �Է¹޴´� / ������ �̸��� �Է¹޴´�
				// �ش� ���̵��� ���� ���, �̸��� ������ ���, �̸����� �ٲ۴�. 
					printf("New password => ");
					scanf_s("%s", pw, 13);

					printf("New name => ");
					scanf_s("%s", name, 10);

					for (int i = 0; i < members; i++) {
						if (strcmp(idList[i], id) == 0) {
							strcpy_s(pwList[i], sizeof(pw), pw);
							strcpy_s(nameList[i], sizeof(name), name);
							printf("Successfully changed your info.\n");
						}
					}
				}
				else {
				// ���ٸ� "���� ������ �������� �ʽ��ϴ�" ���
					printf("Your account does not exist\n");
				}
				
				break;

			case 3:
				printf("\n<< Delete Account >>\n");
				
				// Ż���� ȸ���� ���̵� �Է¹޴´�.
				printf("ID => ");
				scanf_s("%s", id, 10);

				// �ش� ���̵��� ������ �ִ��� ��ȸ�Ѵ�.
				exist = 0;
				for (int i = 0; i < members; i++) {
					if (strcmp(idList[i], id) == 0) {
						exist = 1;
					}
				}

				if (exist) {
					// �ִٸ�
					// ȸ�� ���� ����

					// Ż���Ϸ��� ���� ȸ���� �������� ������ ȸ���� ������ ������ �� ĭ�� ����.
					for (int i = 0; i < members; i++) {
						if (strcmp(idList[i], id) == 0) {
							for (int x = i + 1; x < members; x++) {
								strcpy_s(idList[x - 1], sizeof(idList[x]), idList[x]);
								strcpy_s(pwList[x - 1], sizeof(pwList[x]), pwList[x]);
								strcpy_s(nameList[x - 1], sizeof(nameList[x]), nameList[x]);
							}
						}
					}
					members--;
				}
				else {
					// ���ٸ�
					// ���� ������ �������� �ʽ��ϴ� ���
					printf("Your account does not exist.\n");
				}
				
				break;

			case 4:
				printf("\n<< Log-out >>\n");
				loginSuccess = 0;

				break;

			case 5:
				printf("\n<< Leave this program >>\n");
				running = 0;
				break;

			default:
				printf("\nYou put the wrong number.\n");
			}


		}
		else {
			// �α��� �����ߴٸ�
			// ����ó�� �α��� �� ȭ�� ���,
			// �׿� �´� ����� �����ϵ��� �ڵ带 ����
			printf("<< before Log-in >>\n");
			printf("1. Log-in\n");
			printf("2. Sign-up\n");
			printf("3. Forgot ID?\n");
			printf("4. Forgot PW?\n");
			printf("5. End\n");
			printf("Select Menu => ");

			int menu;
			scanf_s("%d", &menu);

			switch (menu) {
			case 1:
				printf("\n<< Log-in >>\n");

				printf("Enter your ID => ");
				scanf_s("%s", id, 10);
				printf("Enter your password => ");
				scanf_s("%s", pw, 13);

				exist = 0;	// ��ġ�ϴ� ������ �ִ��� ����

				// idList �ȿ� �Է��� ���̵� �ִ��� Ȯ�� AND  pwList�� pw �ִ����� Ȯ�� 
				// => �Ѵ� ������ true�� ���� (exist = 1)
				for (int i = 0; i < 3; i++) {
					// strcmp(A, B) => ���ڿ� A�� ���ڿ� B�� ���ٸ� 0 , �ٸ��� 0�� �ƴ� ��
					if (strcmp(idList[i], id) == 0 && strcmp(pwList[i], pw) == 0) {
						exist = 1;
						loginSuccess = 1;
						strcpy_s(loginUserName, sizeof(nameList[i]), nameList[i]);

					} /* TEST CASE
						 id : O O X X
						 pw : O X O X
						 ------------
						 res: V V V V
					  */

				}

				// ������ ����, ������ ����
				if (exist) {
					printf("You're logged-in!\n");
				}
				else {
					printf("log-in failed\n");
				}


				break;

			case 2:
				printf("\n<< Sign-up >>\n");

				exist = 0;
				// ���̵� �Է¹޴´�.
				printf("ID => ");
				scanf_s("%s", id, 10);		// �迭�� ������ ���� &�� ���� �ʴ´�.

				// ����ڰ� �Է��� ���̵� ������ ȸ�� �߿� �����ϴ��� ã�´�.
				for (int i = 0; i < 3; i++) {
					if (strcmp(idList[i], id) == 0) {
						exist = 1;
					}
				}

				if (exist) {
					printf("ID already exists\n");
				}
				else { // if not exists,
					/*
					���ڿ��� ���, �ٸ� ������ Ÿ�԰� ���� �ٸ��� ������.
					�迭 �ȿ� ���ڿ��� ������ ���� strcpy_s(B, sizeof(A), A)�� ���
					=> A�� B�� ����
					*/
					strcpy_s(idList[members], sizeof(id), id);

					printf("PW => ");
					scanf_s("%s", pwList[members], 13);

					printf("NAME => ");
					scanf_s("%s", nameList[members], 7);

					members++;
					printf("Sign-up completed!\n");
					printf("You are the [%d]th member\n", members);
				}
				break;

			case 3:
				printf("\n<< Find your ID >>\n");
				// �̸��� �Է¹޴´�.
				printf("Enter your name => ");
				scanf_s("%s", name, 7);

				// �Է¹��� �̸��� ������ ȸ�� �߿� �ִ��� Ȯ��
				// �ִٸ� ���̵� ���
				// ���ٸ� "���� ������ �������� �ʽ��ϴ�." ���
				exist = 0;
				for (int i = 0; i < 3; i++) {
					if (strcmp(nameList[i], name) == 0) {
						printf("Your ID is [%s]\n", idList[i]);
						exist = 1;
					}
				}
				if (!exist) {
					printf("Your account does not exist.\n");
				}

				break;

			case 4:
				printf("\n<< Find your PW >>\n");
				// id�� �Է¹޴´�
				printf("Enter your ID => ");
				scanf_s("%s", id, 10);

				// �Է¹��� id�� ������ ȸ�� �߿� �ִ��� Ȯ��
				// �ִٸ� pw ���
				// ���ٸ� "���� ������ �������� �ʽ��ϴ�." ���
				exist = 0;
				for (int i = 0; i < 3; i++) {
					if (strcmp(idList[i], id) == 0) {
						printf("Your password is [%s]\n", pwList[i]);
						exist = 1;
					}
				}
				if (!exist) {
					printf("Your account does not exist.\n");
				}

				break;

			case 5:
				printf("\nLeave this program.\n");
				running = 0;	// running ������ while�� ���ǽĿ��� ����ϹǷ� 0�� �����Ѱ� �ƴ϶� false�� ������ ��
				break;

			default:
				printf("\nYou put the wrong number.\n");
			}

		}


	}

	return 0;
}