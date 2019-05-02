#include <stdio.h>

void main(){
	int int_max = 2147483647;
	unsigned int uint_max = 4294967295;
	char char_max = 127;
	unsigned char uc_max = 255; 
	short short_max = 32767;
	unsigned short ushort_max = 65535;
	signed signed_max = 2147483647;
	unsigned unsigned_max = 4294967295;
	long long longlong_max = 9223372036854775807;
	unsigned long long ulonglong_max = 18446744073709551615;
	short int sint_max = 32767;
	unsigned short int usint_max = 65535;
	long int longint_max = 2147483647;
	unsigned long int ulint_max = 18446744073709551615;
	long long llong_max = 9223372036854775807;
	unsigned long long ullong_max = 18446744073709551615;
	float float_max = -38;
	double double_max = -308;
	long double ldouble_max = -308;


	printf("intÀÇ ÃÖ´ñ°ª : %d\n", int_max);
	printf("unsinged intÀÇ ÃÖ´ñ°ª : %u\n", uint_max);
	printf("charÀÇ ÃÖ´ñ°ª : %d\n", char_max);
	printf("unsigned charÀÇ ÃÖ´ñ°ª : %u\n", uc_max);
	printf("shortÀÇ ÃÖ´ñ°ª : %d\n", short_max);
	printf("unsigned shortÀÇ ÃÖ´ñ°ª : %u\n", ushort_max);
	printf("singedÀÇ ÃÖ´ñ°ª : %d\n", signed_max);
	printf("unsignedÀÇ ÃÖ´ñ°ª : %u\n", unsigned_max);
	printf("long longÀÇ ÃÖ´ñ°ª : %lld\n", longlong_max);
	printf("unsigned long longÀÇ ÃÖ´ñ°ª : %llu\n", ulonglong_max);
	printf("short intÀÇ ÃÖ´ñ°ª : %d\n", sint_max);
	printf("unsigned short intÀÇ ÃÖ´ñ°ª : %u\n", usint_max);
	printf("long intÀÇ ÃÖ´ñ°ª : %ld\n", longint_max);
	printf("unsigned long intÀÇ ÃÖ´ñ°ª : %u\n", ulint_max);
	printf("long longÀÇ ÃÖ´ñ°ª : %lld\n", llong_max);
	printf("unsigned long longÀÇ ÃÖ´ñ°ª : %llu\n", ullong_max);
	printf("floatÀÇ ÃÖ´ñ°ª : %f\n", float_max);
	printf("doubleÀÇ ÃÖ´ñ°ª : %f\n", double_max);
	printf("long doubleÀÇ ÃÖ´ñ°ª : %Lf\n", ldouble_max);
}
