#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RUNS 1000

int main(int argc, char *argv[])
{
    double median = RAND_MAX / 2.0, cur_rand;
    int i = 0, above = 0, below = 0;

    srand(time(NULL));
    printf("Running %d trials.\n", NUM_RUNS);
    while(++i <= NUM_RUNS){
	cur_rand = rand();
	if (cur_rand > median)
	{
	    above++;
	} else if (cur_rand < median){
	    below++;
	}
	printf("Count difference: %d\n", above - below);
    }
    printf("above: %d, below: %d\n", above, below);
    
    return 0;
}
