#include <stdio.h>

void my_add(){
	int number1;
	int number2;
	int result;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &number1, &number2);

	printf("\n- ������ ���� ���� ver1 \n");
	printf("ù ��° �Է� : %d \n", number1);
	printf("�� ��° �Է� : %d \n", number2);
	
	result = number1 + number2;
	printf("%d + %d = %d \n", number1, number2, result);

}

void main(){
	my_add();
	my_add();
	/*
	my_substraction();
	my_multiplication();
	my_multiplication();
	my_division();
	*/
	printf("������ ���ᰡ �Ǿ����ϴ�. �����մϴ�. \n");
}