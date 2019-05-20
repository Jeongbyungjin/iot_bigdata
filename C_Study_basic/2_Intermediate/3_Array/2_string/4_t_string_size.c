#include <stdio.h>

void main(){
	
	// 문자열 크기가 작은 경우 처리되어야 할 문자열이 누락될 수 있다.
	// char str[5];
	
	// 문자열 크기가 큰 경우 누락되는 데이터는 없지만 메모리의 낭비를 초래한다.
	// 
	char str[100];
	int idx = 0;

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
