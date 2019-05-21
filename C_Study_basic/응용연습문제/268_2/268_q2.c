#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char word[100];
	int length = 0, i;
	char temp;

	printf("영단어 하나를 입력하세요 : ");
	scanf("%s", word);

	while (word[length] != '\0') // 우선 입력받은 영단어 길이를 계산
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = word[i];
		word[i] = word[(length - i) - 1];
		word[(length - i) - 1] = temp;
	}
	printf("뒤집힌 영단어 : %s \n", word);
}

// 예를들어, 사용자가 짝수개의 영단어를 입력하면 좌우 대칭
// 홀수개의 단어를 입력한다면 중앙을 기준으로 대칭