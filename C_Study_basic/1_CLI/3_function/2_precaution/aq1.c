#include <stdio.h>

// ���� ���� �Է������� ó���ϴ� ����

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

void main(){
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);

	if(num1 != num2)
	printf("%d�� %d�� ������ ū ���� : %d \n", 
					num1, num2, AbsoCompare(num1, num2));
	else // num1 == num2
		printf("���� �ٸ� ���� �Է��ϼ���.");
}

int AbsoCompare(int num1, int num2)
{
	if(GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if(num < 0)
		return num * (-1);
	else
		return num;
}