#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    double x, avg = 0.0, navg, sum = 0.0;
    
    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n", "Count", "Item", "Average", "Naive avg", "-----", "----", "-------", "---------");
    for (i = 1; scanf("%lf", &x) == 1; ++i){
	avg += (x - avg) / i;
	sum += x;
	navg = sum / i;
	printf("%5d%17e%17e%17e\n", i, x, avg, navg);	
    }
    return 0;
}
