#include <stdio.h>

void main(){ // main 함수, c 프로그램이 최초로 시작되는 지점
		// 모든 함수내 변수는 함수가 시작되는 지점에서 모두 선언 하는 것을 추천한다.
		// 이는 함수에서 사용하는 변수에 대한 가독성을 높여 줄 수 있다.
		// 그리고 전체적으로 사용하는 변수의 사이즈의 총합에 대한 수집이 용이하다.
	int number1=8, number2=3; // 변수 선언 및 초기화, ANSI 89(old)style
	int result;


	// 8/3의 결과는 정수형으로는2, 실수형일 경우는 2.666666..이다
	// 이 중에서 2는 몫(portion)이고 나머지(reaminder)는  2이다.
	// 나머지는 나눗셈에서 나누어지지 않는 부분의 수를 의미한다.
	printf("%d/%d=%d\n", number1,number2, number1/number2);
	//printf함수안에 문자열에 쓰이는 %는 format string을 위한 문법이다.
	//, 이후에 사용된 %는 나머지 연산자이다. 
	printf("%d%%%d=%d\n",number1,number2, number1%number2);

	//int result; //변수 선언(declaration), ANSII 99(new)style
	// 변수 선언을 ANSI 99 style 선언하는 것은 가능하나 추천하지 않느다.
	// 임베디드 프로그램시 구형 임베디드 컴파일러에서 프로그램시 컴파일 에러가 발생하기 때문이다.
	// 이는 ANSI 89style로 작성한 모든 변수에 대한 재작업을 의미한다.
	number1=9; //변수 값 재정(redefine)의 또는 재할당
	number2=4; 
	result = number1%number2; //변수 값 정의(define)

	printf("%d%%%d=%d\n",number1,number2,result);


}
