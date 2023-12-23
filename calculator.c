#include <stdio.h>
#include <string.h>

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int a, int b){
	return a*b;
}
int div(int a, int b){
	return a/b;
}
void mat(int(*fn)(int a, int b), int a, int b){
	int result = fn(a,b);
	printf("The result is %d",result);

int main(){
	int a;
	int b;
	char c[4];


	printf("Write the first number: ");
	scanf("%d",&a);




	printf("Write the mathematical operations\n		FOR EXAMPLE\nDivide is div\nAddition is add\nMultiplication is mul\nSubtraction is sub");
	scanf("%s",c);


	printf("Write the second number: ");
	scanf("%d"),b;




	int(*operation)(int a, int b) 
		if (strcmp(c, "add") == 0){
			operation = add;
		}
		else if (strcmp(c, "sub") ==0){
			operation = sub;
		}
		else if (strcmp(c, "mul") ==0){
			operation = mul;
		}
		else if (strcmp(c, "div") ==0){
			operation = div;
		}
		else
			printf("enter correct mathematical operation");
		return 1;
}
	mat(operation, a, b);
	return 0;
}
