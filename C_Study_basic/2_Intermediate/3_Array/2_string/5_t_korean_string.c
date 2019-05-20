#include <stdio.h>

void main(){
	char str[6];
	int idx = 0;

	// char는 1byte 한글은 2byte이기에 크기에 맞지 않는 매칭이 된다.
	// 컴파일러에 따라서 다양한 에러를 발생 할 수 있다.
	str[0] = '안';
	

	printf("입력 받은 문자열 : %s \n", str);
/*
	printf("문자 단위 출력 : ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
*/
}
