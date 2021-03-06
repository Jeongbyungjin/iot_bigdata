#include <stdio.h>
// 중첩된(nested) while문
void main(){
	int current_times = 2;
	int is = 0;

	printf("구구단을 외자!\n");
	/*
	 * 2 4 6 8 10 12 14 16 18
	 * 3 6 9 12 . . .
	 * .
	 * .
	 * .
	 * 9 18 27  . . .   72 81
	 *
	 * 구구단은 데이터를 table 형태로 표현한 자료구조와 같다.
	 * 이러한 데이터 구조는 2중 반복문으로 접근하는 것이 가장 효율적이다.
	 * 첫번째 while문은 논리적으로 데이터 table의 행을 접근하는 것이며
	 * 두번째 while문은 논리적으로 데이터 table의 열을 접근하는 것이다.
	*/
	while(current_times<10){
		is = 1; // 각 열을 접근하는 조건을 초기화

		printf("=== %d단 ===\n", current_times);
		while(is < 10){
			printf("%d X %d = %d\n", current_times, is, current_times*is);
			is++; // 다음 열을 접근하기 위한 조건을 설정
		}
		printf("\n");
		current_times++; // 다음 행을 접근하기 위한 조건 설정
	}
}
