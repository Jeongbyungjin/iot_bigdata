#include <stdio.h>

void main(){
	
	// ���ڿ� ũ�Ⱑ ���� ��� ó���Ǿ�� �� ���ڿ��� ������ �� �ִ�.
	// char str[5];
	
	// ���ڿ� ũ�Ⱑ ū ��� �����Ǵ� �����ʹ� ������ �޸��� ���� �ʷ��Ѵ�.
	// 
	char str[100];
	int idx = 0;

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ��� : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}