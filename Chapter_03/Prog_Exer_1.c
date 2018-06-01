/* Prog_Exer_1.c Find out what your system does with floating-point overflow and underflow */

#include <stdio.h>
#include <math.h>

int main(void)
{
	float f_overflow;
	float f_underflow;
	int i_overflow;
	int i;	
	double i_power;
	
	printf("The size of a float is %ld bytes. \n", sizeof(float));
	printf("The size of a long is %ld bytes. \n", sizeof(long));
	printf("The size of a int is %ld bytes. \n", sizeof(int));


	i_overflow = 2^32;	
	f_overflow = i_overflow;
	f_underflow = 1.28e0;
	
	for(i = 1; i < 10; i = i + 1)
	{	
		i_power = pow(10,i);
		printf("The value f_underflow is: %f. \n", f_underflow/i_power);
	}	 

	return 0;
}
