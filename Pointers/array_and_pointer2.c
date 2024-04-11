#include <stdio.h>
/*
 * main: generate some simple output
 * @a: an array of integers
 * @b: pointer to an integer
 */
int main(void)
{
	int i;
	int a[5] = {1, 2, 3, 4, 5};
	int *b;
	b = a;

	if (b[0]==1)
		b[0] = 10;
	{
		for (i = 0;i <= 4;i++)
		{
			printf("%d\n", b[i]);
		}
	}
	return (0);
}
