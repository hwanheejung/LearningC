/*
����ü���� ���ڿ�
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
	// �����ϰ� ������ �� ���ڿ��� ������ �� ����
	// S002.name = "Amy";
	//	=> use strcpy_s(B, ����, A)
	strcpy_s(S002, 4, "Amy");
	S002.age = 23;
	S002.height = 164.5;

	// �� �л��� ������ ������ �� �ִ� ����ü �迭
	// studentInfoList = {�л��� ����, �л��� ����, �л��� ����}
	struct Student studentInfoList[3];

	strcyp_s(studentInfoList[0].name, 6, "James");
	studentInfoList[0].age = 45;
	studentInfoList[0].height = 178.9;

	return 0;
}

// c.f. project���� 
// ȸ�������� ������ �� �ִ� ����ü, ����ü�迭