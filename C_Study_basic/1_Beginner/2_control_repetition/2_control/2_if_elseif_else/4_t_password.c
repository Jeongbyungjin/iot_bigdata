#include <stdio.h>

void main(){
	const int my_password = 1234567;
	const unsigned char max_count = 3;
	const unsigned char iot_true = 1;
	const unsigned char iot_false = 0;
	int input_count = 0;
	int input_password = 0;
	// is_의 의미 : flag 변수. 특정 이벤트가 수행되었는지 확인하는 용도로 사용하는 변수 
	int is_verified = 0;

	for(;input_count < max_count; input_count++){ // 위에서 초기화 하였기 때문에 for문에서 생략가능!
		printf("패스워드를 입력하세요 : ");
		scanf("%d", &input_password);

		if(my_password == input_password){
			printf("IoT 빅데이터반 입장가능합니다.\n");
			is_verified = iot_true;
			break;
		}
	}	
	
	if(is_verified == iot_false){
		printf("패스워드 최대 입력 횟수 %d회를 초과하였습니다.\n", max_count);
		printf("행정실로 확인절차 부탁합니다.\n");
	}

	// 만약에 아래와 같은 코드가 추가가 된다면 이는 제대로 사용한 single if가 아니다.
	// -> 쉽게 생각해서 else를 써야한다는 말이다.
	
	if(is_verified == iot_true){
		printf("\n 입장완료하였습니다.");
	}
}
