#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int max, min, total;
	int i;
	int index;
	
	int arr[5];

	max = -2147483647;
	printf("5개의 정수를 순서대로 입력하세요 : ");
	for (i = 0; i < 5; i++) // 총 다섯 번 실행
	{
		scanf("%d", &arr[i]); // 순서대로 입력 받아진다.
		if (max < arr[i])
		{
			max = arr[i]; // 현재 max값보다 arr[i]가 크다면 그 값으로 max에 대입
		}
	}
	printf("당신이 입력한 정수 중 가장 큰 값 : %d \n", max);

	min = 2147483647;
	printf("5개의 정수를 순서대로 입력하세요 : ");
	for (i = 0; i < 5; i++) // 총 다섯 번 실행
	{
		scanf("%d", &arr[i]); // 순서대로 입력 받아진다.
		if (min > arr[i])
		{
			min = arr[i]; // 현재 max값보다 arr[i]가 크다면 그 값으로 max에 대입
		}
	}
	printf("당신이 입력한 정수 중 가장 작은 값 : %d \n", min);

	total = 0;
	printf("5개의 정수를 순서대로 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		total = total + arr[i];
	}
	printf("당신이 입력한 정수의 총합 : %d", total);
}