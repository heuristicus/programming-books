#include "poly.h"

void add_poly(void)
{
    int n;
    
    printf("This program adds two polynomials. Enter the maximum degree of the polynomials.\n");
    scanf("%d", &n);
    
    double g[n + 1], h[n + 1], f[n + 1];
    
    scan_to_arr("Enter coefficients for polynomial a. Enter zero for values with no coefficients.", g, n);
    printf("Polynomial a is:");
    print_poly(g, n);
    
    scan_to_arr("Enter coefficients for polynomial b. Enter zero for values with no coefficients.", h, n);
    printf("Polynomial b is:");
    print_poly(h, n);
    
    add(f, g, h, n);
    
    printf("Result: \n");
    print_poly(f, n);
}

void add(double f[], double g[], double h[], int n)
{
    int i;
    
    for (i = 0; i <= n; i++){
	f[i] = g[i] + h[i];
    }
}

void print_poly(double p[], int n)
{
    int i;
    
    for (i = 0; i <= n; i++){
	printf("%+.3lfx^%d ", p[i], i);
    }
    printf("\n");
}

