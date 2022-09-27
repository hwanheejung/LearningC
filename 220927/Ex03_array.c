/*
===== 배열 =====
- 여러 개의 '변수'를 하나로 묶는 역할
- 같은 타입의 데이터들을 하나의 공간에 저장할 수 있음

- 배열의 길이 : 배열에 저장된 데이터의 수	=> sizeof(arrayName) / sizeof(int)
- 배열의 크기 : 배열에 저장된 데이터의 수 * 데이터타입 크기 => sizeof(arrayName)

1) 배열 선언
	type arrayName[arrayLength];	
	- arraySize: 배열에 저장할 수 있는 데이터의 수 

2) 배열 저장
	arrayName[idx] = {  ,  ,  };

3) 활용


*/

#include <stdio.h>

int main() {
	// method 1 : 선언하고 저장하고 
	int std1[3];
	std1[0] = 84;
	std1[1] = 62;
	std1[2] = 55;
	int sum1 = std1[0] + std1[1] + std1[2];

	int std2[3];
	std2[0] = 93;
	std2[1] = 71;
	std2[2] = 80;
	int sum2 = std2[0] + std2[1] + std2[2];

	double avgScore[2];
	avgScore[0] = (double) sum1 / 3;
	avgScore[1] = (double) sum2 / 3;

	printf("student 1 : %lf\n", avgScore[0]);
	printf("student 2 : %lf\n", avgScore[1]);

	// method 2-1 : 선언하면서 저장 1 (배열의 길이를 명시 - 선언한 arraySize만큼만 저장 가능)
	int stu1[3] = { 84, 62, 55 };

	// method 2-2 : 선언하면서 저장 2 (배열의 길이 명시하지 않음 - 저장한 데이터 개수만큼 자동으로 arraySize 결정)
	int stu2[] = { 93, 71, 80 };


	// 배열의 크기 
	int nums[] = { 10, 9, 8 };
	int size = sizeof(nums);			// 배열의 크기
	int length = size / sizeof(int);	// 배열의 길이 
	
	printf("배열의 크기 => %d\n", size);
	printf("배열의 길이 => %d\n", length);

	return 0;
}