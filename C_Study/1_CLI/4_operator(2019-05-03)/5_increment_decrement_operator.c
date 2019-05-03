#include <stdio.h>

void main(){
	int altitude = 0;

	printf("현재 고도 %dm\n", altitude);

	altitude = altitude + 1;
	printf("현재 고도 %dm\n", altitude);

	altitude += 1;
	printf("현재 고도 %dm\n", altitude);

	altitude = ++ altitude; // 이런 표현은 할 필요가 없다.
	printf("현재 고도 %dm\n", altitude);

	++ altitude;
	printf("현재 고도 %dm\n", altitude);

	altitude ++;
	printf("현재 고도 %dm\n", altitude);

	printf("현재 고도 %dm\n", ++altitude); // 선행연산
	printf("현재 고도 %dm\n", altitude++); // 후행연산
	printf("현재 고도 %dm\n", altitude);
	// ++x : +1하고 출력 , x++ : 기존 x값 출력하고 +1 [차이]
	
	// x = x + 1; / x += 1; / x = ++ x; / ++ x; / x ++; 는 같은 표현.
	// 증가연산자의 사용은 감소연산자에도 똑같이 적용된다.
	
	printf("현재 고도 %dm\n", --altitude);
	printf("현재 고도 %dm\n", altitude--);
	printf("현재 고도 %dm\n", altitude);
}
