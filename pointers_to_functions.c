#include <stdio.h>


int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return  a-b;
}

void mat(int(*fn)(int a, int b), int a, int b){
	int result = fn(a,b);
	printf("result is %d",result);
}

int main(){
	int a = 12;
	int b = 10;
	mat(add,a,b);
}
