/*
- 형태:
	switch(값){
		case 값1:
			코드
			break;
		case 값2:
			코드
			break;
		...
	}
- switch에 들어오는 값에 맞는 case가 작동함. 
- 값 자리에 들어올 수 있는 것: 정수, 문자

- break가 없으면 컴퓨터 입장에서는 어디가 끝인지 모름.
- default: case가 없는 값이 들어왔을 때를 잡는 키워드
*/

#include <stdio.h>

int main() {
	// manual
	printf("<< ~~ 프로그램 >>\n");
	printf("1. 회원가입\n");
	printf("2. 로그인\n");
	printf("3. 아이디 찾기\n");
	printf("4. 비밀번호 찾기\n");
	printf("메뉴 번호 입력 => ");
	//

	int menu;
	scanf_s("%d", &menu);

	switch (menu) {
		case 1:
			printf("회원가입");
			break;
		case 2:
			printf("로그인");
			break;
		case 3:
			printf("아이디 찾기");
			break;
		case 4:
			printf("비밀번호 찾기");
			break;
		default: 
			printf("메뉴 번호를 잘못 입력하셨습니다.\n");
			break;
	}

	return 0;
}