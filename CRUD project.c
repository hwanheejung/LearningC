/*
CRUD project
Create(회원가입) / Read(회원정보 조회) / Update(회원정보 변경) / Delete(회원정보 삭제)
<< before Log-in >>
-> Log-in : 회원가입 시 입력했던 아이디와 비번을 입력하고 맞으면 성공, 틀리면 실패
-> Sign-up : 회원 정보를 프로그램에 저장하는 것
-> Forgot ID?
-> Forgot PW?

<< after Log-in>>
-> Member Information Inquiry
-> Change info : 기존의 회원 정보에 새로운 회원 정보를 덮어씌우는 것 (update)
-> Delete account : 탈퇴할 회원의 정보 삭제 / 경우에 따라서 탈퇴 이후에 있는 모든 회원들의 정보를 앞으로 한 칸씩 당김.(공간낭비)
											  당겨야되는 상황: 선형리스트를 사용해서 데이터를 저장했을 경우
-> Log-out
*/


#include <stdio.h>
#include <string.h>		

int main() {
	int running = 1;	// running은 while의 조건식으로 변수이므로 1이 아닌 true를 저장하는 것

	char idList[3][10];		// 3명 각자 9자씩
	char pwList[3][13];		// 3명 각자 12자씩
	char nameList[3][7];	// 3명 각자 6자씩 (한글 3자)

	char id[10];
	char pw[13];
	char name[7];

	int members = 0;		// 현재 가입한 회원의 수 and sign-up 시 몇 번 인덱스에 회원정보를 저장할지 결정할 값
	int exist;

	int loginSuccess = 0;		// 로그인 성공 여부
	char loginUserName[14];		// 로그인 성공했을 때 로그인한 계정 이름

	while (running) {
		printf("\n========================\n");
		printf("===== CRUD project =====\n");

		if (loginSuccess == 1) {
			// 로그인 성공 시 로그인 후 화면 출력
			// 그에 맞는 기능이 동작하도록 코드를 구성
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
				// n번째 계정부터 마지막 계정까지 차례대로 접근해서
				// n번째 계정의 아이디, 비번, 이름 출력

				for (int i = 0; i < members; i++) {
					printf("\n<< %d번째 회원 계정 정보 >>\n", i + 1);
					printf("ID => %s\n", idList[i]);
					printf("PW => %s\n", pwList[i]);
					printf("NAME => %s\n", nameList[i]);
				}

				break;

			case 2:
				printf("\n<< Change info >>\n");

				// 정보를 변경할 회원의 아이디를 입력받는다
				printf("Enter your ID => ");
				scanf_s("%s", id, 10);
				
				// 해당 아이디의 계정이 있는지 찾는다
				exist = 0;
				for (int i = 0; i < members; i++) {
					if (strcmp(idList[i], id) == 0) {
						exist = 1;
					}
				}

				if (exist) {
				// 있다면 변경할 비번을 입력받는다 / 변경할 이름을 입력받는다
				// 해당 아이디의 계정 비번, 이름을 변경할 비번, 이름으로 바꾼다. 
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
				// 없다면 "계정 정보가 존재하지 않습니다" 출력
					printf("Your account does not exist\n");
				}
				
				break;

			case 3:
				printf("\n<< Delete Account >>\n");
				
				// 탈퇴할 회원의 아이디를 입력받는다.
				printf("ID => ");
				scanf_s("%s", id, 10);

				// 해당 아이디의 계정이 있는지 조회한다.
				exist = 0;
				for (int i = 0; i < members; i++) {
					if (strcmp(idList[i], id) == 0) {
						exist = 1;
					}
				}

				if (exist) {
					// 있다면
					// 회원 정보 삭제

					// 탈퇴하려는 다음 회원의 정보부터 마지막 회원의 정보를 앞으로 한 칸씩 당긴다.
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
					// 없다면
					// 계정 정보가 존재하지 않습니다 출력
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
			// 로그인 실패했다면
			// 기존처럼 로그인 전 화면 출력,
			// 그에 맞는 기능이 동작하도록 코드를 구성
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

				exist = 0;	// 일치하는 계정이 있는지 여부

				// idList 안에 입력한 아이디가 있는지 확인 AND  pwList에 pw 있는지도 확인 
				// => 둘다 있으면 true로 설정 (exist = 1)
				for (int i = 0; i < 3; i++) {
					// strcmp(A, B) => 문자열 A와 문자열 B가 같다면 0 , 다르면 0이 아닌 값
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

				// 있으면 성공, 없으면 실패
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
				// 아이디를 입력받는다.
				printf("ID => ");
				scanf_s("%s", id, 10);		// 배열에 저장할 때는 &를 쓰지 않는다.

				// 사용자가 입력한 아이디가 가입한 회원 중에 존재하는지 찾는다.
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
					문자열의 경우, 다른 데이터 타입과 많이 다르게 동작함.
					배열 안에 문자열을 저장할 때는 strcpy_s(B, sizeof(A), A)를 사용
					=> A를 B에 복사
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
				// 이름을 입력받는다.
				printf("Enter your name => ");
				scanf_s("%s", name, 7);

				// 입력받은 이름이 가입한 회원 중에 있는지 확인
				// 있다면 아이디 출력
				// 없다면 "계정 정보가 존재하지 않습니다." 출력
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
				// id를 입력받는다
				printf("Enter your ID => ");
				scanf_s("%s", id, 10);

				// 입력받은 id가 가입한 회원 중에 있는지 확인
				// 있다면 pw 출력
				// 없다면 "계정 정보가 존재하지 않습니다." 출력
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
				running = 0;	// running 변수는 while의 조건식에서 사용하므로 0을 저장한게 아니라 false를 저장한 것
				break;

			default:
				printf("\nYou put the wrong number.\n");
			}

		}


	}

	return 0;
}