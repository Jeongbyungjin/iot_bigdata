#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ascii = 64;
	int idx = 0;
	char word[100];
	int num;

	printf("영단어 1개를 입력하세요 : ");
	scanf("%s", word);

	while (word[idx] != '\0')
	{
		if (ascii < word[idx])
		{
			ascii = word[idx];
		}
		idx++;
	}
	printf("당신이 입력한 단어의 알파벳 중 가장 큰 아스키 값 : %d / %c", ascii, ascii);
}