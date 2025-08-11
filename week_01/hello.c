#include <stdio.h>

int main(void){
	printf("Enter first name: ");
	char name[20];
	scanf("%19s", name);
	printf("Hello, %s\n", name);
}
