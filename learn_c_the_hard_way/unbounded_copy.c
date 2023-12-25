#include <stdio.h>
#include "string.h"
int main(int argc, char* argv[]){
	if (argc <=1)
		return -1;
	char input[5];
	strcpy(input, argv[1]);
	printf("You typed %s",input);
	return 0;
}
