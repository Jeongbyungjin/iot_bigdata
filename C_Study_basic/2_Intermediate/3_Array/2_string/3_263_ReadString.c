#include <stdio.h>

void main(){
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� : ");
	/*
	 	���ڿ� �Է� : Hello World
		�Է� ���� ���ڿ� : Hello
		: scanf�� ���ڿ� �Է½� ���鹮�ڸ� ������ ��� ���鹮�� ������ ���
	   	  ���ڿ��� ���õȴ�.	
		  ������ �����Ͽ� �Է¹޴� ���� ���� ���ڿ� ���� �Լ� é�Ϳ��� ����.
	*/
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
