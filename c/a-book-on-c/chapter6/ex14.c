#include "poly.h"

void multiply_poly(void)
{
    int n;
    
    printf("Enter the maximum degree of your polynomials:\n");
    scanf("%d", &n);
    
    double f[n * 2 + 1], g[n + 1], h[n + 1];
    
    scan_to_arr("Enter the coefficients of your first polynomial. Enter zero for values with no coefficients.", g, n);
    print_poly(g, n);
    
    scan_to_arr("Enter the coefficients of your second polynomial.", h, n);
    print_poly(g, n);
    
    mult(f, g, h, n);
    printf("Result: \n");
    print_poly(f, n * 2);
    
}

void mult(double f[], double g[], double h[], int n)
{
    int i, j;
    
    for (i = 0; i <= n; i++){
	for (j = 0; j <= n; j++){
	    //printf("i: %d, j: %d, f[i+j]: %lf, g * h: %lf\n", i, j, f[i+j], g[i] * h[j]);
	    f[i + j] += g[i] * h[j];
	}
    }

}
