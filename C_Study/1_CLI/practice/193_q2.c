#include <stdio.h>

// (A,Z) = (0,9) (1,8) (2,7) (3,6) (4,5) (5,4) (6,3) (7,2) (8,1) (9,0)

int main(void){
	int A,Z;
	
	for(A=0; A<10; A++)
	{
		for(Z=0; Z<10; Z++)
		{
			if(A+Z == 9)
			{
				printf("AZ = %d%d , ZA = %d%d", A, Z, Z, A);
				printf(" µû¶ó¼­, AZ + ZA = 99\n");
			}
		}
	}
	return 0;
}
