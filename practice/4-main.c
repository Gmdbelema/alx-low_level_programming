#include <stdio.h>

/**
 * main - Storing the address of a variable into a pointer
 *
 * return: Always 0.
 *
 */

int main(void)

{
	int n;
	int *p;


	n = 98;
	p = &n;

	printf("value of 'n' : %d\n", n);
	printf("Address of variable 'n' : %p\n", &n);
	printf("value of 'p' : %p\n", p);
	
	*p = 402;
	printf("value of 'n' : %d\n", n);

	return (0);
}


