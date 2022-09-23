/*
switch의 case에서 break를 의도적으로 뺄 수도 있음. 
*/

#include <stdio.h>

int main() {
	printf("===== [ 자판기 ] =====\n");
	printf("1.콜라\n");
	printf("2.콜라\n");
	printf("3. 사이다\n");
	printf("4. 환타\n");
	printf("5. 탄산수\n");
	printf("메뉴를 선택하세요 > ");

	int menu;
	scanf_s("%d", &menu);

	switch (menu) {
		case 1:
		case 2:
			printf("콜라\n");
			break;
		case 3:
			printf("사이다\n");
			break;
		case 4:
			printf("환타\n");
			break;
		case 5:
			printf("탄산수\n");
			break;
		default:
			printf("번호를 잘못 입력하셨습니다.");
	}


	return 0;
}

