#include <stdio.h>
#include <math.h>

double calc_root(double disc, double a, double b, char c);
double calc_disc(double a, double b, double c);
void handle_degenerate(double a, double b, double c);
void handle_general(double a, double b, double c);

int main(int argc, char *argv[])
{
    double a, b, c;
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

/* disc = discriminant
   sign = '-' or '+'.
*/
double calc_root(double disc, double a, double b, char sign)
{
    if (sign == '-')
	return (1 / (2 * a)) * (-b + sqrt(disc));
    else if (sign == '+')
	return (1 / (2 * a)) * (-b - sqrt(disc));
    else
	printf("ERROR: unknown sign.\n");
    exit(1);
}


/* calculates the discriminant */
double calc_disc(double a, double b, double c)
{
    return pow(b, 2) - (4 * a * c);
}


/* handles calculation of degenerate cases where a = 0*/
void handle_degenerate(double a, double b, double c)
{
    if (b != 0){
	printf("Degenerate case. Computing single root...\n");
	double root1 = -c / b;
	printf("root: %.6lf\n", root1);
    } else {
	printf("Extremely degenerate. No roots computed.\n");
    }
}

/* handles general cases where a != 0 */
void handle_general(double a, double b, double c)
{
    double root1, root2, discriminant, mult;
    
    discriminant = calc_disc(a, b, c);
    printf("%.6lf\n", discriminant);
    if (discriminant > 0){
	printf("Discriminant is positive. Two real roots. Computing...\n");
    } else if (discriminant == 0){
	printf("Discriminant is zero. Two real equal roots. Computing...\n");
    } else {
	printf("Discriminant is negative. Two complex roots. Computing...\n");
	mult = (1 / (2 * a));
	discriminant = mult * sqrt(-discriminant);
	printf("root 1: %.6lf + %.6lfi, root 2: %.6lf - %.6lfi\n", mult, mult * discriminant, mult, mult * discriminant);
	return;
    }
    
    root1 = calc_root(discriminant, a, b, '+');
    root2 = calc_root(discriminant, a, b, '-');
    printf("root 1: %.6lf, root 2: %.6lf\n", root1, root2);
	
}
