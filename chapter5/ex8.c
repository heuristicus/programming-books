#include <stdio.h>

#define STEP 0.1

double poly(double a, double b, double c, double x);

int main(int argc, char *argv[])
{
    double a, b, c, x, int_start, int_end;
    
    printf("Enter a, b, c and x, where (ax^2 + bx + c).\n");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &x);
    printf("The value of your degree 2 polynomial %lfx^2 + %lfx + %lf when x is %lf is: %lf\n", a, b, c, x, poly(a, b, c, x));
    printf("Enter an interval for which to compute values of the function.\n");
    if ((scanf("%lf%lf", &int_start, &int_end)) != 2){
	printf("No values/incorrect values present. Exiting.\n");
	exit(1);
    }
    printf("Calculating value of polynomial in interval [%lf, %lf] with step %lf\n", int_start, int_end, STEP);
    for (x = int_start; x <= int_end; x += STEP){
	printf("x: %lf, val: %lf\n", x, poly(a, b, c, x));
    }
    return 0;
}

double poly(double a, double b, double c, double x)
{
    return (a * x + b) * x + c;
}

