#include <stdio.h>

int gcd(int, int);
int gcd_iter(int, int);

int main(int argc, char *argv[])
{
    int i, j;
    
    for (i = 100, j = 200; i < 150; i++, j--){
	printf("i: %d, j: %d, gcd: %d\n", i, j, gcd(i, j));
    }
    return 0;
}

int gcd(int p, int q)
{
    int r;
    
    if ((r = p % q) == 0)
	return q;
    else
	return gcd(q, r);
}

int gcd_iter(int p, int q)
{
    int r, val = p, mod = q;
    
    while ((r = val % mod) != 0){
	val = mod;
	mod = r;
    }

    return mod;
}
