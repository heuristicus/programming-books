#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double x0, x1 = 1.0, a = 41;
    int cnt = 0;
        
    while (x0 != x1){
	x0 = x1;
	x1 = 0.5 * (x0 + (a / x0));
	
	printf("cnt: %d, x1: %.15f, a - x1 * x1: %.15f\n", ++cnt, x1, a - x1 * x1);
    }
    
    return 0;
}
