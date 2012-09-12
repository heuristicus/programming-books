#include <stdio.h>

#define START 6
#define FINISH 100

int is_prime(int n);

int main(int argc, char *argv[])
{
    int i, j;
    for (i = START; i <= FINISH; i += 2){
	for (j = i; j > 0; j--){
	    if (j == 0)
		printf("Goldbach conjecture is false.\n");
	    if (is_prime(j) && is_prime(i - j)){
		printf("%d = %d + %d\n", i, j, i - j);
		break;
	    }
	}
    }
    
    return 0;
}

/* super crappy. Learn some maths, moron! */
int is_prime(int n)
{
    int i;
    
    if (n == 1 || n == 0)
	return 0;
    
    for (i = 2; i < n; i++){
	
	if (n % i == 0){
	    return 0;
	}
    }
    return 1;
}
