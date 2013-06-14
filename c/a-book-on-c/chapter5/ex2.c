#include <stdio.h>
#include <math.h>

double fth_root(double x);

int main(int argc, char *argv[])
{
    double x;
    
    printf("Enter a value. Its fourth root will be computed.\n");
    scanf("%lf", &x);
    printf("Fourth root of %lf is %lf\n", x, fth_root(x));
    
    return 0;
}

double fth_root(double x)
{
    return sqrt(sqrt(x));
}
