// 복합연산자 (compound assignment operator)

#include <stdio.h>

void main(){
	int accumulated_total = 0;
//  int 5_1_total = 0, 5_2_total = 0; 누적된 총합을 구하기 위한 목적으로 불필요한 변수
	int num1 = 2, num2 = 4, num3 = 6;
	
	printf("병진이의 5월 총 수입 : %d\n", accumulated_total);
	
	accumulated_total = accumulated_total + 10000;
	printf("5월 1일 병진이의 5월 총 수입 : %d\n", accumulated_total);

	accumulated_total = accumulated_total + 50000;
	printf("5월 2일 병진이의 5월 총 수입 : %d\n", accumulated_total);

	accumulated_total += 30000;
	// 11, 14라인의 축약버전
	// 의미 x += y; : x = x + y;
	// +=  -=  *=  /=  %=를 모두 복합연산자라고 한다.
	// x += y; <=> x = x + y;
	// x -= y; <=> x = x - y;
	// x *= y; <=> x = x * y;
	// x /= y; <=> x = x / y;
	// x %= y; <=> x = x % y;
	printf("5월 3일 병진이의 5월 총 수입 : %d\n", accumulated_total);

	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d, %d, %d\n",num1 ,num2, num3);
}
