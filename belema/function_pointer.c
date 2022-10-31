#include <stdio.h>
// A normal function with an integer parameter
//  and void return type

void fun(int a)
{
	printf("The value of a is %d\n", a);
	printf("The address of int is %i\n", &fun);
}

int main()
{
	//fun pointer is a pointer to a function fun()
	void (*fun_ptr)(int) = &fun;

	/* The above line is equivalent of following two
	   void (*fun_ptr)(int);
 	   fun_ptr = &fun;
	*/

       	// Invoking fun() using fun_ptr
	    (*fun_ptr)(10);
	    
	 return 0;
}
