#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int idx = 0;
	int length;
	int i = 0;
	
	char word[100]; 
	char newword[100];

	printf("���ܾ� 1���� �Է��ϼ��� : ");
	scanf("%s", word);

	length = 0;
	while (word[idx] != '\0')
	{
		idx++;
		length++;
	}
//	printf("����� �Է��� �ܾ��� ���� : %d", length);
	
 
	while (word[i] != '\0')
	{
		newword[i] = word[(length - 1) - i];
		i++;
	}
	printf("����� �Է��� ���ܾ��� ���� : %s \n", newword);
}