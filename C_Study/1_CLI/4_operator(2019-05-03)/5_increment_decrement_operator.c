#include <stdio.h>

void main(){
	int altitude = 0;

	printf("���� �� %dm\n", altitude);

	altitude = altitude + 1;
	printf("���� �� %dm\n", altitude);

	altitude += 1;
	printf("���� �� %dm\n", altitude);

	altitude = ++ altitude; // �̷� ǥ���� �� �ʿ䰡 ����.
	printf("���� �� %dm\n", altitude);

	++ altitude;
	printf("���� �� %dm\n", altitude);

	altitude ++;
	printf("���� �� %dm\n", altitude);

	printf("���� �� %dm\n", ++altitude); // ���࿬��
	printf("���� �� %dm\n", altitude++); // ���࿬��
	printf("���� �� %dm\n", altitude);
	// ++x : +1�ϰ� ��� , x++ : ���� x�� ����ϰ� +1 [����]
	
	// x = x + 1; / x += 1; / x = ++ x; / ++ x; / x ++; �� ���� ǥ��.
	// ������������ ����� ���ҿ����ڿ��� �Ȱ��� ����ȴ�.
	
	printf("���� �� %dm\n", --altitude);
	printf("���� �� %dm\n", altitude--);
	printf("���� �� %dm\n", altitude);
}
