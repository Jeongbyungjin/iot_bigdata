#include <stdio.h>
#pragma warning (disable:4996)
// 전체 기능 : 두 수를 입력 받아서 절댓값이 큰 수를 판단해 주는 프로그램
// 아래 두 줄은 Function Prototype(함수 원형)
// 함수 원형을 작성하는 행위 : 함수 선언(Function Declaration)
int AbsoCompare(int num1, int num2);	// 절댓값이 큰 정수 반환
int GetAbsoValue(int num);				// 전달인자의 절댓값을 반환

void main(){
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1 ,&num2);
	// 함수의 인자가 길 경우 -> 줄 바꿈을 해도 문제 X
	// 다른 언어에서는 문제가 될 수도 있다. ex. python
	printf("%d와 %d중 절댓값이 큰 정수 : %d \n", 
					num1, num2, AbsoCompare(num1,num2));
}

int AbsoCompare(int num1, int num2){
	// 함수는 main 함수에서만 호출 할 수 있는 것이 아니다.
	// 함수에서 함수를 호출 할 수 있다.
	// 관계 연산을 하기 위해서 좌항, 우항의 함수를 각각 호출하여 평가한 결과를 기반으로
	// 비교 연산을 한다.
	if(GetAbsoValue(num1) > GetAbsoValue(num2)){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num < 0){
		return num * (-1);
	}else{
		return num;
	}
}