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
}	
