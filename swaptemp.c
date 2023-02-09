#include<stdio.h>

int main()
{

	double  first, second, temp;
	printf("Enter the first number:");
	scanf("%lf", &first);
		// %lf  is the format specifier for long double. %f and %lf can be used as format specifier for double
	printf("Enter the second number:");
	scanf("%lf", &second);
            
	temp = first;
	first = second;
	second = temp;

	//0.2lf dispalys numbers upto 2 decimal places
	
	printf("\n After Swapping, first number = %0.2lf \n \t \t second number  = %0.2lf \n\n", first, second);
	return 0;
}
