// ���տ����� (compound assignment operator)

#include <stdio.h>

void main(){
	int accumulated_total = 0;
//  int 5_1_total = 0, 5_2_total = 0; ������ ������ ���ϱ� ���� �������� ���ʿ��� ����
	int num1 = 2, num2 = 4, num3 = 6;
	
	printf("�������� 5�� �� ���� : %d\n", accumulated_total);
	
	accumulated_total = accumulated_total + 10000;
	printf("5�� 1�� �������� 5�� �� ���� : %d\n", accumulated_total);

	accumulated_total = accumulated_total + 50000;
	printf("5�� 2�� �������� 5�� �� ���� : %d\n", accumulated_total);

	accumulated_total += 30000;
	// 11, 14������ ������
	// �ǹ� x += y; : x = x + y;
	// +=  -=  *=  /=  %=�� ��� ���տ����ڶ�� �Ѵ�.
	// x += y; <=> x = x + y;
	// x -= y; <=> x = x - y;
	// x *= y; <=> x = x * y;
	// x /= y; <=> x = x / y;
	// x %= y; <=> x = x % y;
	printf("5�� 3�� �������� 5�� �� ���� : %d\n", accumulated_total);

	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d, %d, %d\n",num1 ,num2, num3);
}
