#include <stdio.h>

int main()
{
	int a;
	long int b;
	long long int c;
	float d;
	double e;
	long double f;
	char g;

	printf("Size of int  \t = %zu Bytes \n", sizeof(a));                                     // 4 Bytes
	printf("Size of long int  \t = %zu Bytes \n", sizeof(b));				// 8 Bytes
	printf("Size of long long int  \t = %zu Bytes \n", sizeof(c));				// 8 Bytes
	printf("Size of float  \t = %zu Bytes \n", sizeof(d));					// 4 Bytes
	printf("Size of double \t = %zu Bytes \n", sizeof(e));					// 8 Bytes
	printf("Size of long double  \t = %zu Bytes \n", sizeof(f));				// 16 Bytes
	printf("Size of char  \t = %zu Bytes \n", sizeof(g));					// 1 Byte
	return 0;


}

