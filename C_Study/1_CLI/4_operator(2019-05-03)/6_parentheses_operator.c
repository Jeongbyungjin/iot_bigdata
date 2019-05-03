#include <stdio.h>

void main(){
	
		printf("result: %d\n", 10);
		printf("result: %d\n", 1+2);

		printf("result: %d\n", 1+2+3);
		printf("result: %d\n", 3+1+2);
		// +,- 는 순서가 상관없다.

		printf("result: %d\n", 2*3+4);
		printf("result: %d\n", 4+2*3);
		// *,/ 의 피연산자가 순서가 바뀔 경우
		// *,/ 이 +,-보다 우선순위를 높일 수 있다.
		// 괄호연산자를 사용하면 강제로 우선순위를 높일 수 있다.


		printf("result: %d\n", (4+2)*3);

		printf("result: %d\n", 3+4*5);
		printf("result: %d\n", 3+(4*5));
		// ()를 붙이는게 상당히 중요하다.
		// 컴파일러에 따라 사칙연산 우선순위를 무시하는 경우도 있다.
		// 따라서, ()붙이는 것을 습관화 할 것. -> 유지보수를 위함.
		
		int num1 = 10;
		int num2 = (num1--) + 2;

		printf("num1 : %d\n", num1); // 결과값 : 9
		printf("num2 : %d\n", num2); // 결과값 : 12
}

// 표현식 적용원칙
// ㄱ. from 왼쪽 to 오른쪽
// ㄴ. 사칙연산에서의 우선순위
//     a. * 과 / 은 + - 에 우선한다.
// 
