#include <stdio.h>

#define LIMIT 46

long fib(int n);
int is_prime(long n);

int main(int argc, char *argv[])
{
    int n, cnt;
    
    printf("Tests fibonacci primes to fib(n). Input n.\n");
    scanf("%d", &n);
    //printf("%ld\n", (result = fib(n)));
    for (cnt = 1; cnt <= n; cnt++){
	printf("%d %s a fibonacci prime.\n", cnt, is_prime(fib(cnt)) ? "Is" : "Is not");
    }
		
    return 0;
}

long fib(int n)
{
    long f0 = 0, f1 = 1, temp;
    int cnt;
    
    for (cnt = 1; cnt < n; cnt++){
	temp = f1;
	f1 += f0;
	f0 = temp;
    }
    return f1;
}

/* super crappy. Learn some maths, moron! */
int is_prime(long n)
{
    int i;
    
    if (n == 1)
	return 0;
    
    for (i = 2; i < n; i++){
	
	if (n % (long) i == 0){
	    return 0;
	}
    }
    return 1;
}
