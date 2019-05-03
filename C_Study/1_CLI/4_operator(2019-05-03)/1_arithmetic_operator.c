#include <stdio.h>
// 한글과 영어 연결시키는 연습을 많이 해둘 것.
// ex. 연산자 - operator

void main(){ // main 함수, C 프로그램이 최초로 시작되는 지점
	// 모든 함수내 변수는 함수가 시작되는 지점에서 모두 선언해라!
	// ㄱ. 가독성 높음.
	// ㄴ. 전체적으로 사용하는 변수의 사이즈의 총합에 대한 수집이 용이.
	int number1 = 8, number2 = 3; // 변수 선언 및 초기화, ANSI 89(Old) style
	int result;
	// Old style은 불편하지만 2가지 점에서 익힐 것을 추천한다.
	// ㄱ. 임베디드 프로그램시 구형 임베디드 컴파일러에서 프로그램시 컴파일에러
	//     가 발생하기 때문이다. 이는 ANSI 99 Style로 작성한 모든 변수에 대한
	//     재작업을 의미한다.

	// 8/3의 결과는 정수형으로는 2, 실수형일 경우에는 2.6666667 이다.
	// 이 중에서 2는 몫(portion)이고 나머지는 2(remainder)이다.
	// 나머지는 나눗셈에서 나누어지지 않는 부분의 수를 의미한다.
	printf("%d / %d = %d\n",number1 ,number2, number1 / number2);
	// printf 함수 안에 문자열 '%'를 출력하기 위해 %가 하나 더 있는 것.
	// , 뒤의 '%'는 연산자로서 역할한다.
	// '%'는 나머지를 출력한다.
	printf("%d %% %d = %d\n",number1 , number2, number1 % number2);
	// , 뒤에는 상수.변수.수식이 올 수 있다.

	// int result; // '변수를 선언하다'라고 표현한다, ANSI 89(New) style
	number1 = 9; // 변수 값 재정의(redefine) (>) 재할당
	number2 = 4;
	result = number1 % number2; // 변수 값 정의(define)

	printf("%d %% %d = %d\n",number1 , number2, result);

}
