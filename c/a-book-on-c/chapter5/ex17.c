#include <stdio.h>

int factorial(int);


int main(int argc, char *argv[])
{
    int cnt;
    
    for (cnt = 0; cnt < 20; cnt++){
	printf("%d\n", factorial(cnt));
    }
    return 0;
}

int factorial(int n) /* wrong */
{
    if (n == 0 || n == 1)
	return 1;
    else
	return (n * factorial(--n));
}
