#include <stdio.h>

void main(){
	int world = 7;
	int number = 1;
	printf("world sector: %d\n", world);
	/*
	 * while ���Ŀ� 1�� ������ ��쿡�� {}�� ������ �� �ִ�.
	while(number <= 50)
		printf("Hello guest%d!\n", number++);
	*/

	// {} ������ ���� �ʴ� ���� ����.
	// �Ʒ��� ���� ������ indentation�� �ϰ� ���� statement block����
	// �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
	// �ݵ�� {}�� �� ��.
	while(number <= 50)
		printf("Hello guest%d!\n", number);
		number++;
}