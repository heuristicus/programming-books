#include <stdio.h>

#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65536
#define FLOATING_MODULUS 65536.0

static unsigned seed = INITIAL_SEED;

unsigned random(void)
{
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return seed;
}

double probability(void)
{
    seed = (MULTIPLIER * seed + INCREMENT) % MODULUS;
    return (seed / FLOATING_MODULUS);
}

int main(int argc, char *argv[])
{
    int cnt = 0, n;
    
    if (argc != 2){
	printf("Second argument is number of randoms to print\n");
	exit(1);
    }
    
    n = atoi(argv[1]);
        
    //printf("How many randoms do you want to output?\n");
    //scanf("%d", &n);
    for (; cnt < n; cnt++){
	printf("%lf\n", probability());
	if (cnt % 10 == 0)
	    printf("\n");
	
    }
    return 0;
}
