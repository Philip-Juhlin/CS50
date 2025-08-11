#include <stdio.h>

int main(void){
	char name[30];
	printf("Enter full name: ");
	fgets(name, sizeof(name), stdin);
	printf("Hello, %s\n", name);
}
