#include <stdio.h>
#pragma warning (disable:4996)
// 명령어 사이의 줄바꿈 수는 몇개가 되더라도
// 실행하는데에는 영향을 미치지 않는다.




// int AbsoCompare(int num1,int num2);
int             AbsoCompare(int num1,int num2);
int GetAbsoValue(int num);				

void main(){
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1 ,&num2);
	printf("%d와 %d중 절댓값이 큰 정수 : %d \n", 
					num1, num2, AbsoCompare(num1,num2));
}

int AbsoCompare(int num1, int num2){
	if(GetAbsoValue(num1) > GetAbsoValue(num2)){
		return num1;
	}else{
		return num2;
	}

int GetAbsoValue(int num){
	if(num < 0){
		return num * (-1);
	}else{
		return num;
	}
}
