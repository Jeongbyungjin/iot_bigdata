#include <stdio.h>

void main(){
	int input_num;
	int sum = 0;
	int rep = 0;

	printf("다섯 개의 정수를 입력하세요. 단, 반드시 1 이상이여야 합니다.\n");
	while(rep < 5)
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &input_num);
		while(input_num < 1)
		{
			printf("정수를 재입력하세요\n");
			input_num = 1;
			sum = sum - input_num;
			rep--;
		}
		sum = sum + input_num;
		rep++;
	}
	printf("당신이 입력한 정수이 총합: %d", sum);
}
