#include <stdio.h>

int main(int argc, char *argv[])
{
    int cnt, i, j, n, error = 1;
    int odd_sum = 0, even_sum = 0;

    while (error != 0){
		printf("Enter an integer. The sum of the first n even and odd integers will be calculated.\n");
	scanf("%d", &n);
	if (error = (n <= 0))
	    printf("\nERROR: Do it again!\n\n");	    
    };
    
    for (cnt = 0, i = 1, j = 2; cnt < n; ++cnt, i += 2, j += 2){
	odd_sum += i, even_sum += j;
    }
    printf("odd sum: %d, even sum: %d\n", odd_sum, even_sum);
    
    return 0;
}
