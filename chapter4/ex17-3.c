#include <stdio.h>

int main(int argc, char *argv[])
{
    int cnt = 0, i = 1, j = 2, n;
    int odd_sum = 0, even_sum = 0;
        
    printf("Enter an integer. The sum of the first n even and odd integers will be calculated.\n");
    scanf("%d", &n);
    while (cnt < n){
	odd_sum += i;
	even_sum += j;
	j += 2;
	i += 2;
	cnt++;
	
    }
    printf("odd sum: %d, even sum: %d\n", odd_sum, even_sum);
    return 0;
}
