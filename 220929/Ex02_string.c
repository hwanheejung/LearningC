/*
===== "���ڿ�" =====
	- ���ڵ��� ����� '�迭'
	- "" 

	- Null ���� (\n) 
		���ڿ��� ǥ���ϸ� �츮 ���� �Ⱥ��̴� null����(\n)�� ���ڿ��� ���� �� ����.
		��? ��ǻ�Ͱ� ���ڿ��� ���� �ν��� �� ���
		��ǻ�Ͱ� �ν��� �� �ְ� null���ڷ� ǥ���صδ� �� ( C�� �ش� )
		���� 13+1 �ؾ���.


	0 1 2 3 4 5 6 7 8 9 10 11 12 13 
	H e l l o   w o r l d  ~  ! \0 

	- �迭�� ���̴� �迭�� ũ��� ����.
	
		length = sizeof(arrayName)/sizeof(char) = 1
			-> sizeof(char) = 1
			-> length = sizeof(arrayName)

*/
#include <stdio.h>

int main() {
	int var1 = 1;
	double var2 = 3.14;
	char var3 = 'a';
	
	// ���ڿ��� ������ ������ �� ����ϴ� data type
	char var4[14] = "Hello World~!";
	char var5[14] = { 'H', 'e', 'l', 'l','o', ' ', 'W', 'o', 'r', 'l', 'd', '~', '!', '\0'};


	char var6[] = "H";
	char var7[] = " ";	// ���鹮��
	char var8[] = "";	// �� ���ڿ�
	char var9[] = "Hello World~!";

	printf("var 6 => %s\n", var6);
	printf("var 7 => [%s]\n", var7);	// ���� Ȯ�� ���� []�� ǥ��
	printf("var 8 => [%s]\n", var8);
	printf("var 9 => %s\n", var9);

	// ���ڿ��� ������ �ִ� ���ڸ� ����ϰ� ���� �� 
	printf("var9[4] => %c\n", var9[4]);


	return 0;
}