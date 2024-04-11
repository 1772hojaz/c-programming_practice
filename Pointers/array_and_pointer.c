#include <stdio.h>
/*
 * main: illustration of array and pointer
 * @d : array of 4 integers
 * @a : pointer to integer
 */

int main(void)
{
	int i;
	int d[4] = {1, 2, 3, 4};
	int *a;
	a = d;

	for (i = 0;i <= 3;i++)
	{
		printf("%d\n", a[i]);
	}
	return (0);
}
