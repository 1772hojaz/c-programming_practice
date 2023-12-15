#include <stdio.h>
char name[10];
char hey(){
	printf("What is your name: ");
	scanf("%9s",name);
	return 0;
} 
int main(){
	hey();
	printf("Hello %s",name);
}
