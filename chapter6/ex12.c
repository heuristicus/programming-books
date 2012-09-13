#include <stdio.h>
#include <math.h>
#include "poly.h"

#define N 5 /* N is the max degree */

double p[N + 1];

int main(int argc, char *argv[])
{
    printf("Enter polynomial coefficients (degree 5)\n");
    int i = 0;
    double x;
    
    while ((scanf("%lf", &p[i])) == 1 && i++ < N);
    
    printf("Enter x value.\n");
    scanf("%lf", &x);
    
    printf("Value of polynomial: %lf\n", eval(p, x, N));
    return 0;
}

/* 6 additions, 5 multiplications plus power function. */
double eval_naive(double p[], double x, int n) /* n is max degree */
{
    double val;
    int i;
        
    for (val = 0, i = 0; i <= n; ++i){
	if (i == 0)
	    val += p[0];
	else
	    val += p[i] * pow(x, i);
    }
    return val;
}
/* horner's rule: 5 additions, 5 multiplications*/
double eval(double p[], double x, int n)
{
    return p[0] + x * (p[1] + x * (p[2] + x * (p[3] + x * (p[4] + x * (p[5])))));
}
