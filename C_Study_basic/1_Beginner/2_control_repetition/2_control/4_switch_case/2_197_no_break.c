#include <stdio.h>

void main(){
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력 : ");
	scanf("%c", &sel);
	float my_pi;

	// switch에서 지정한 변수와 매칭이 되는 case의 이동은 한 번만 이루어진다.
	// 그리고 특별히 break를 만나지 않는 이상 끝까지 모든 명령문을 수행한다.
	// switch ()의 변수는 일반적으로 정수형 자료형을 사용
	// -> 단, 문자형 자료형을 포함
	switch(sel){
		case 'M': // if (sel == 'M' || sel == 'm')
		case 'm':
			printf("Morning \n");
			break;
		case 'A':
			printf("Good ");
		case 'a':
			printf("Arternoon \n");
			break;
		case 'E':
		case 'e':
			printf("Evening \n");
			break;
	}
// switch()의 변수가 실수형이기 때문에 컴파일 에러를 발생한다.
/*	
	switch(my_pi){
		case 1.11:
			printf("case 1.11 \n");
			break;
		case 3.14:
			printf("case 3.14 \n");
			break;
		default:
			printf("default! \n");
	}
*/
}
