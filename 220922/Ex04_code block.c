#include <stdio.h>

int main() {
	
	printf("score : ");

	int score;
	scanf_s("%d", &score);
	
	// if���� ���ǽ��� true�� �� ������ �ڵ�� �⺻������ �� �� �ٸ� ����. 
	// code block {} : ���� ���� �ڵ带 ������
	if (score < 0 || score > 100) {
		printf("you entered the wrong score.\n");
		printf("The score should be between 0 and 100\n");

	}
	
	
	return 0;
}