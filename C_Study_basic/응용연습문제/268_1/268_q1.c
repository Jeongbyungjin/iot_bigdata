#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int idx = 0;
	int length;

	char word[100];
	
	printf("���ܾ� 1���� �Է��ϼ��� : ");
	scanf("%s", word);

//	printf("����� �Է��� �ܾ� : %s \n", word); �ͼ����� �ʾƼ� �� �� ����
	
	length = 0;
	while (word[idx] != '\0')
	{
		idx++;
		length++;
	}
	printf("����� �Է��� �ܾ��� ���� : %d", length);
}