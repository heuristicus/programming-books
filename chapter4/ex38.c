#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double x, lastx;
    int cnt, n;
    
    printf("Iterations?\n");
    scanf("%d", &n);
    
    for (x = 0, lastx = 1, cnt = 1; cnt <= n; cnt++){
	lastx = x;
	x = pow(1 + (1 / (double) cnt), (double) cnt);
	if (cnt % 1000 == 0 ||  n - cnt < 100)
	    printf("x: %.15f, lx: %.15f, df: %.15f\n%d iterations)\n", x, lastx, x - lastx, cnt);
    }
    
    printf("x = %.15f, lastx = %.15f, %d iterations)\n", x, lastx, cnt);
    
    return 0;
}
