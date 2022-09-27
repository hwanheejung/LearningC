// practice 'for'

#include <stdio.h>

int main() {
	
	int num; 
	printf("정수 입력 => ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}