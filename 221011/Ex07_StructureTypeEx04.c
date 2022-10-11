/*
구조체에서 문자열
*/

#include <stdio.h>

struct Student {
	char name[10];
	int age; 
	double height;
};

int main() {
	struct Student S001 = { "Michael", 19, 167.5 };

	struct Student S002;
	// 선언하고 저장할 때 문자열을 저장할 수 없음
	// S002.name = "Amy";
	//	=> use strcpy_s(B, 길이, A)
	strcpy_s(S002, 4, "Amy");
	S002.age = 23;
	S002.height = 164.5;

	// 세 학생의 정보를 저장할 수 있는 구조체 배열
	// studentInfoList = {학생의 정보, 학생의 정보, 학생의 정보}
	struct Student studentInfoList[3];

	strcyp_s(studentInfoList[0].name, 6, "James");
	studentInfoList[0].age = 45;
	studentInfoList[0].height = 178.9;

	return 0;
}

// c.f. project에서 
// 회원정보를 저장할 수 있는 구조체, 구조체배열