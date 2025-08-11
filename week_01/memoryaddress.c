#include <stdio.h>

int main(void)
{
	int number = 43;
	int* p = &number;
	printf("address number: %p\n", &number);
	printf("value number: %i\n", number);
	printf("address pointer: %p\n", p);
	printf("value pointer: %i\n", *p);
	*p = 20;
	printf("address pointer: %p\n", p);
	printf("value pointer: %i\n", *p);
	printf("value number: %i\n", number);
	//int overflow
	*p *= 20000000000000;
	printf("value pointer when multiplied by 20000000000000: %i\n", *p);
	printf("p has integer overflow\n");
	//truncation
	*p = 3;
	printf("3/2 equal: %i\n", *p/2);
	printf("3/2 actually equals: %f\n", (float) *p/2);

}	
