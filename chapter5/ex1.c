#include <stdio.h>
#include <math.h>

double power(double x, int n);

int main(int argc, char *argv[])
{
    double x;
    int n;
    
    printf("Enter two values. The second must be an integer. v1 ^ v2 will be computed.\n");
    scanf("%lf%d", &x, &n);
    printf("Value %.6lf\n", power(x, n));
    
    return 0;
}

double power(double x, int n)
{
    return pow(x, (double) n);
}
