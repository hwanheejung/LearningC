/*
===== "문자열" =====
	- 문자들이 저장된 '배열'
	- "" 

	- Null 문자 (\n) 
		문자열을 표현하면 우리 눈에 안보이는 null문자(\n)가 문자열의 끝에 들어가 있음.
		왜? 컴퓨터가 문자열의 끝을 인식할 수 없어서
		컴퓨터가 인식할 수 있게 null문자로 표시해두는 것 ( C언어만 해당 )
		따라서 13+1 해야함.


	0 1 2 3 4 5 6 7 8 9 10 11 12 13 
	H e l l o   w o r l d  ~  ! \0 

	- 배열의 길이는 배열의 크기와 같다.
	
		length = sizeof(arrayName)/sizeof(char) = 1
			-> sizeof(char) = 1
			-> length = sizeof(arrayName)

*/
#include <stdio.h>

int main() {
	int var1 = 1;
	double var2 = 3.14;
	char var3 = 'a';
	
	// 문자열을 변수에 저장할 때 사용하는 data type
	char var4[14] = "Hello World~!";
	char var5[14] = { 'H', 'e', 'l', 'l','o', ' ', 'W', 'o', 'r', 'l', 'd', '~', '!', '\0'};


	char var6[] = "H";
	char var7[] = " ";	// 공백문자
	char var8[] = "";	// 빈 문자열
	char var9[] = "Hello World~!";

	printf("var 6 => %s\n", var6);
	printf("var 7 => [%s]\n", var7);	// 공백 확인 위해 []로 표현
	printf("var 8 => [%s]\n", var8);
	printf("var 9 => %s\n", var9);

	// 문자열이 가지고 있는 문자를 출력하고 싶을 때 
	printf("var9[4] => %c\n", var9[4]);


	return 0;
}