#include <stdio.h>

void main(){
	int input_num;
	int sum = 0;
	int rep = 0;

	printf("�ټ� ���� ������ �Է��ϼ���. ��, �ݵ�� 1 �̻��̿��� �մϴ�.\n");
	while(rep < 5)
	{
		printf("������ �Է��ϼ���: ");
		scanf("%d", &input_num);
		while(input_num < 1)
		{
			printf("������ ���Է��ϼ���\n");
			input_num = 1;
			sum = sum - input_num;
			rep--;
		}
		sum = sum + input_num;
		rep++;
	}
	printf("����� �Է��� ������ ����: %d", sum);
}
