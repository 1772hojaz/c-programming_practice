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
	scanf("%s",c);
	printf("enter the last number: ");
	scanf("%d",&b);



	if (c[0] == 'a'){
		mat(add ,a ,b);
	}
	else if (c[0] =='s'){
		mat(sub ,a ,b);
	}
	else if (c[0] == 'm'){
		mat(mult ,a ,b);
	}
	else if (c[0] =='d'){
		mat(div ,a ,b);
	}
	else
		printf("put a valid mathematical operators");

	return 0;
}
