#include <stdio.h>
#include <math.h>

double* newton_raphson(int a);

int main(int argc, char *argv[])
{
    int cnt = 1, a, iter;
    double x0, x1;
    printf("Enter a positive integer. All integer roots up to that value will be calculated.\n");
    scanf("%d", &a);
    
    for (; cnt <= a; cnt++){
	iter = 0;
	x0 = 0;
	x1 = 1.0;
	
	while (x0 != x1){
	    x0 = x1;
	    x1 = 0.5 * (x0 + (cnt / x0));
	    iter++;
	    //printf("iter: %d, x1: %.15f, a - x1 * x1: %.15f\n", iter, x1, a - x1 * x1);
    	}
	printf("number: %d, root: %.15f, iterations: %d\n", cnt, x1, iter);
    }
    
    return 0;
}
