#include <stdio.h>

double degF_to_degC(double degF);
double degC;

int main(){
	double userInput;
	printf("write the number of fehrenheits to be changed to degrees: ");
	scanf("%lf",&userInput);
	degC = degF_to_degC(userInput);
	printf("the number of degrees is: %.2f\n",degC);

	return 0;
}

double degF_to_degC(double degF){
	return (degF - 32.0)/1.8;
}
