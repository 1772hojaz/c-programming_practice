#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argV[]){
	int *vec;
	vec = (int*)malloc(sizeof (int)*4);
	vec[0] = 10;
	vec[1] = 11;
	vec[2] = 17;
	vec[3] = 20;
	
	printf("vec[0] = %d\n vec[1] = %d\n vec[2] = %d\n vec[3] = %d\n", vec[0], vec[1], vec[2], vec[3]);
	free(vec);
	return 0;
}
