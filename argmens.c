#include <stdio.h>
char name[20];
void write(){
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hello %s\n", name);
}
int main(){
	write("name");
	return 0;
}
