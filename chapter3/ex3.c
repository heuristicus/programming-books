#include <stdio.h>
#include <math.h>

#define STEPS 20

int main(int argc, char *argv[])
{
    double two_pi = 2.0 * M_PI, step_val = two_pi / STEPS;
    double x = 0.0;
    int cnt = 0;
        
    while(x < two_pi){
	printf("Current a: %f\nsin: %.15f\ncos: %.15f\ntan: %.15f\n", x, sin(x), cos(x), tan(x));
	x += step_val;
	cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
