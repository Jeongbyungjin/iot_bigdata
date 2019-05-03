#include <stdio.h>

void main(){
	int accumulated_total = 0;
	
	printf("병진이의 5월 총 수입 : %d\n", accumulated_total);
	
	accumulated_total += 10000;
	printf("5월 1일 병진이의 5월 총 수입 : %d\n", accumulated_total);

	// =+ 사소한 차이지만 이 코드가 사람의 생명 또는 경제적인 것과 관련된
	// 경우의 것이라면 결과는 매우 치명적이다.
	// 아래의 코드는 +30000(양수)이 재할당 된 것이다. 
	accumulated_total =+ 30000; // ※주의※
	printf("5월 1일 병진이의 5월 총 수입 : %d\n", accumulated_total);
	
	accumulated_total -= 5000;
	printf("큰고개 식당에서 5000원 점심값 지출\n", accumulated_total);
	printf("5월 3일 병진이의 5월 총 수입 : %d\n", accumulated_total);
	
	accumulated_total =- 20000; // ※주의※
	printf("VIPS에서 여자친구와 20000원 저녁값 지출\n", accumulated_total);
	printf("5월 4일 병진이의 5월 총 수입 : %d\n", accumulated_total);
}
