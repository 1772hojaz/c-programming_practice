#include <stdio.h>

int main()
{
	int i;
	for (i = 0; i <= 100; i++){
	if (i%3==0 && i%5==0){
		printf("FizzBuzz\n");
	}
	else if  (i%5==0){
		printf("Buzz\n");
	}
	else if (i%3==0){
		printf("Fizz\n");
	}
	else{
		printf("%i\n",i);
	}
	}
	return 0;
}
