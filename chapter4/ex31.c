#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c, d;
    int error;
    
    printf("Enter three values. The roots of a polynomial with those coefficients will be computed.\n");
    while ((error = scanf("%lf%lf%lf", &a, &b, &c)) == 3){
	if (a == 0)
	    handle_degenerate(a, b, c);
	else
	    handle_general(a, b, c);
	printf("Enter three integers.\n");
    }

    return 0;
}
