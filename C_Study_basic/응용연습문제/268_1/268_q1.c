#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int idx = 0;
	int length;

	char word[100];
	
	printf("영단어 1개를 입력하세요 : ");
	scanf("%s", word);

//	printf("당신이 입력한 단어 : %s \n", word); 익숙하지 않아서 한 번 연습
	
	length = 0;
	while (word[idx] != '\0')
	{
		idx++;
		length++;
	}
	printf("당신이 입력한 단어의 길이 : %d", length);
}