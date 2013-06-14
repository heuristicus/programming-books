#include <stdio.h>

#define N 30
double power(int , int);
void prn_heading(void);
void prn_tbl_of_powers(int, int);

int main(int argc, char *argv[])
{
    prn_heading();
    prn_tbl_of_powers(N, 6);
    return 0;
}

void prn_heading(void)
{
    printf("\n::::: A TABLE OF POWERS :::::\n\n");    
}

void prn_tbl_of_powers(int n, int maxpow)
{
    int i, j;
    
    for (i = 1; i <= n; ++i){
	for (j = 1; j <= maxpow; ++j){
	    if (j == 1){
		printf("%lf", power(i, j));
	    } else {
		printf("%15.1lf", power(i, j));
	    }
	}
	putchar('\n');
    }
}

double power(int m, int n)
{
    int i;
    double product = 1.0;
    
    for (i = 1; i <= n; ++i){
	product *= m;
    }
    return product;
}
