#include <stdio.h>

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mult(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}

void mat(int(*fn)(int a, int b), int a, int b){
	int result = fn(a,b);
	printf("result is %d", result);
}

int main(){
	int a;
	int b;
	char c[4];
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the math symbles for example:\nadd for addition\nsub for subtraction\nmult for multiblication\ndiv for division\n Write here: ");
	scanf("%s",&c);
	printf("enter the last number: ");
	scanf("%d",&b);

	mat(c,a,b);
	return 0;
}
