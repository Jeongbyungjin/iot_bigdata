#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int i;
	
	char character[9] = {'G','o','o','d',' ','t','i','m','e'};

	for(i = 0; i < 9; i++)
		printf("%c", character[i]);
}