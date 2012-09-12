#include <stdio.h>

int is_prime(int n);

int main(int argc, char *argv[])
{
    int n;
    
    printf("Enter a number. Will check if prime.\n");
    scanf("%d", &n);
    printf("Your number is %sprime.\n", is_prime(n) ? "" : "not ");
    return 0;
}

/* super crappy. Learn some maths, moron! */
int is_prime(int n)
{
    int i;
    
    if (n == 1)
	return 0;
    
    for (i = 2; i < n; i++){
	
	if (n % i == 0){
	    return 0;
	}
    }
    return 1;
}
