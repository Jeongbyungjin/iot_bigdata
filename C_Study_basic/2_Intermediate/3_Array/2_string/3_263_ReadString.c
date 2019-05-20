#include <stdio.h>

void main(){
	char str[50];
	int idx = 0;

	printf("문자열 입력 : ");
	/*
	 	문자열 입력 : Hello World
		입력 받은 문자열 : Hello
		: scanf의 문자열 입력시 공백문자를 포함한 경우 공백문자 이후의 모든
	   	  문자열은 무시된다.	
		  공백을 포함하여 입력받는 것은 추후 문자열 전용 함수 챕터에서 배운다.
	*/
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
