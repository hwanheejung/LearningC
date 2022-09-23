/*
break : break를 감싸고 있는 반복문 한 겹을 빠져나감
	  : break는 if와 함께 사용해서 조건이 됐을 때 반복문을 빠져나가도록 함
	  : while을 if와 break를 사용해서 구현하면 while을 구현하기도 편하고 code 가독성도 많이 향상됨
	  : 따라서 while, (if, break)는 한 세트라고 생각해도 됨

continue : continue를 감싸고 있는 반복문 한 겹의 처음으로 올라감
		 : 일반적으로 사용 X

*/

// 홀수만 출력하는 프로그램
#include <stdio.h>

int main() {
	int n = 1;

	/*
	while (n <= 10) {
		if (n % 2 == 1) {
			printf("%d\n", n);
		}
		n++;
	}
	*/

	while (n <= 10) {
		if (n % 2 == 0) {
			n++;
			continue;
		}
		printf("%d\n", n);
		n++;
	}

	return 0;
}