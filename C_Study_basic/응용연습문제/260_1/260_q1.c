#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int max, min, total;
	int i;
	int index;
	
	int arr[5];

	max = -2147483647;
	printf("5���� ������ ������� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++) // �� �ټ� �� ����
	{
		scanf("%d", &arr[i]); // ������� �Է� �޾�����.
		if (max < arr[i])
		{
			max = arr[i]; // ���� max������ arr[i]�� ũ�ٸ� �� ������ max�� ����
		}
	}
	printf("����� �Է��� ���� �� ���� ū �� : %d \n", max);

	min = 2147483647;
	printf("5���� ������ ������� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++) // �� �ټ� �� ����
	{
		scanf("%d", &arr[i]); // ������� �Է� �޾�����.
		if (min > arr[i])
		{
			min = arr[i]; // ���� max������ arr[i]�� ũ�ٸ� �� ������ max�� ����
		}
	}
	printf("����� �Է��� ���� �� ���� ���� �� : %d \n", min);

	total = 0;
	printf("5���� ������ ������� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		total = total + arr[i];
	}
	printf("����� �Է��� ������ ���� : %d", total);
}