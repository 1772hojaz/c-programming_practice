#include <stdio.h>
/*
 * main: generate some simple output
 * @return (0)
 * @a variable
 * @b pointer to the variable a
 *
 */

int main(void)
{
	int a = 5;
	int *b;


	printf("the value of a is %d\n", a);
	b = &a;
	*b = 445;
	printf("the changed value of a is %d\n", a);

	return (0);
}
