#include <stdio.h>

int main(int argc, char *argv[])
{
    int cnt, i = 1, j = 2, n;
    int odd_sum = 0, even_sum = 0;
        
    printf("Enter an integer. The sum of the first n even and odd integers will be calculated.\n");
    scanf("%d", &n);
    for (cnt = 0; cnt < n; ++cnt){
	odd_sum += i;
	even_sum += j;
	i += 2;
	j += 2;
    }
    printf("odd sum: %d, even sum: %d\n", odd_sum, even_sum);
    return 0;
}
