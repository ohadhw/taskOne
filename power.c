#include "myMath.h"
#define E 2.71828182845904523536
double Pow(double x,int y)
{
	double ans = 1;
	for(int i = 0; i<y; i++){
		ans = x*ans;
	}
	return ans;
}
double Exp(int x)
{
       	return Pow(E,x);
}

