#include <stdio.h>

int fibo(int n){
	if (n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else return (fibo(n-2) + fibo(n-1));
}

int main(){
	int n;
	printf("what is the number of the term you want\n For examble 5th term write 5:  ");
	scanf("%d",&n);
	int Fn = fibo(n);
	printf("Fibonacci(%d) = %d\n",n,Fn);
	return 0;
}
