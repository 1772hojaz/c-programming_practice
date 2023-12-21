#include <stdio.h>
int a;
int main(){
	a = 10;
	int *p;
	p = &a;
	printf("the adress of a is %x\n",p);
	printf("the value of a using a pointer is %ld\n",*p);
	return 0;
}	
