#include <stdio.h>

int main() {
	
	printf("score : ");

	int score;
	scanf_s("%d", &score);
	
	// if문의 조건식이 true일 때 동작할 코드는 기본적으로 딱 한 줄만 가능. 
	// code block {} : 여러 줄의 코드를 묶어줌
	if (score < 0 || score > 100) {
		printf("you entered the wrong score.\n");
		printf("The score should be between 0 and 100\n");

	}
	
	
	return 0;
}