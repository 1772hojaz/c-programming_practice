#include <stdio.h>
int a;
int main(){
	a = 10;
	int *p;
	p = &a;
	printf("the adress of a is %d\n",p);
	printf("the value of a using a pointer is %x\n",*p);
	return 0;
}	
