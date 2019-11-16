#include<stdio.h>
#include "basicMath.c"
#include "power.c"

int main(){
	double x;
	printf("Please insert a real number: \n");
	scanf("%lf",&x);
	double first = sub(add(Exp(x),Pow(x,3)),2);
	double second = (add(mul(x,3),Pow(mul(x,2),2)));
	double third = (div(mul(4,Pow(x,3)),sub(5,mul(2,x))));

	printf("The value of f(x)=e^x+x^3-2 at the point %0.2f is: %0.4f \n" , x, first);
	printf("The value of f(x)=3x+2x^2 at the point %0.2f  is: %0.4f \n",x, second);
	printf("The value of f(x)=(4x^3)/(5-2x) at the point %0.2f is: %0.4f \n ",x , third);

	return 0;
}
