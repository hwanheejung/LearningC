#include <stdio.h>

int main() {
	int running = 1;
	while (running){
		// manual
		printf("<< ~~ 프로그램 >>\n");
		printf("1. 회원가입\n");
		printf("2. 로그인\n");
		printf("3. 아이디 찾기\n");
		printf("4. 비밀번호 찾기\n");
		printf("5. 프로그램 종료\n");
		printf("메뉴 번호 입력 => ");
		//

		int menu;
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("회원가입\n");
			break;
		case 2:
			printf("로그인\n");
			break;
		case 3:
			printf("아이디 찾기\n");
			break;
		case 4:
			printf("비밀번호 찾기\n");
			break;
		case 5:
			printf("프로그램이 종료됩니다.\n");
			running = 0;
			break;
		default:
			printf("메뉴 번호를 잘못 입력하셨습니다.\n");
			break;
		}
	}
	

	return 0;
}