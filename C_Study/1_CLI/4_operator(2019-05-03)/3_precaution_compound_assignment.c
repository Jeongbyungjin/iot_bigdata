#include <stdio.h>

void main(){
	int accumulated_total = 0;
	
	printf("�������� 5�� �� ���� : %d\n", accumulated_total);
	
	accumulated_total += 10000;
	printf("5�� 1�� �������� 5�� �� ���� : %d\n", accumulated_total);

	// =+ ����� �������� �� �ڵ尡 ����� ���� �Ǵ� �������� �Ͱ� ���õ�
	// ����� ���̶�� ����� �ſ� ġ�����̴�.
	// �Ʒ��� �ڵ�� +30000(���)�� ���Ҵ� �� ���̴�. 
	accumulated_total =+ 30000; // �����ǡ�
	printf("5�� 1�� �������� 5�� �� ���� : %d\n", accumulated_total);
	
	accumulated_total -= 5000;
	printf("ū�� �Ĵ翡�� 5000�� ���ɰ� ����\n", accumulated_total);
	printf("5�� 3�� �������� 5�� �� ���� : %d\n", accumulated_total);
	
	accumulated_total =- 20000; // �����ǡ�
	printf("VIPS���� ����ģ���� 20000�� ���ᰪ ����\n", accumulated_total);
	printf("5�� 4�� �������� 5�� �� ���� : %d\n", accumulated_total);
}
