#include <stdio.h>

void main(){
	int num, abs;

	printf("���� �Է�: ");
	scanf("%d", &num);

	// ? : ���׿�����(Ternary Operator)
	// ����  [���/����/���ǽ�] ? ���ɹ�1 : ���ɹ�2;
	// step1) ? ���� [���/����/���ǽ�]�� ��
	// case1) step1�� ����� ���̸� ���ɹ�1 ����
	// case2) step1�� ����� �����̸� ���ɹ�2 ����
	// ���� : ������ �ǿ����ڷ� ������ ó����� �����ϰ� ���α׷��� ����
	// ���� : - �� ���� ���ɹ�(Statement)�� ó���ϴµ� ����
	//		  - ������ ���ɹ� ǥ�� X
	//		  - �Ӻ���� ȯ�濡���� �Ϲ������� ������� �ʵ��� �ǰ�

	abs = num > 0 ? num : num*(-1);

	// �� ���α׷��� �Ʒ��� ����.
	/*
	if(num > 0){
		abs = num;
	}else{
		abs = (-1)*num;
	}
	*/

	printf("���� : %d \n", abs);
}