#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ascii = 64;
	int idx = 0;
	char word[100];
	int num;

	printf("���ܾ� 1���� �Է��ϼ��� : ");
	scanf("%s", word);

	while (word[idx] != '\0')
	{
		if (ascii < word[idx])
		{
			ascii = word[idx];
		}
		idx++;
	}
	printf("����� �Է��� �ܾ��� ���ĺ� �� ���� ū �ƽ�Ű �� : %d / %c", ascii, ascii);
}