#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int idx = 0;
	int length;
	int i = 0;
	
	char word[100]; 
	char newword[100];

	printf("영단어 1개를 입력하세요 : ");
	scanf("%s", word);

	length = 0;
	while (word[idx] != '\0')
	{
		idx++;
		length++;
	}
//	printf("당신이 입력한 단어의 길이 : %d", length);
	
 
	while (word[i] != '\0')
	{
		newword[i] = word[(length - 1) - i];
		i++;
	}
	printf("당신이 입력한 영단어의 역순 : %s \n", newword);
}