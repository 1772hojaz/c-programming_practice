#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;

	//allocate memory for an array of 5 integers
	p = (int*)malloc(5 * sizeof(int));

	if (p == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	//use the allocation memory
	for (int i = 0; i <= 4; i++ )
	{
		p[i] = i;
	}

	for (int j = 0; j <= 4; j++ )
	{
		printf("%d\n", p[j]);
	}
	free(p);
	return (0);
}
