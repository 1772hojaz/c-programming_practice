#include <stdio.h>

int main(int argc, char *argv[]){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	char *num = (age >=18) ? "a child": "an adult";
	printf("You are %s ", num);
}
