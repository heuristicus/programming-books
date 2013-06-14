#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, start_val, sum = 0;
    
    printf("Input an integer.\n");
    scanf("%d", &n);
    start_val = n;
    sum += start_val;
    
    if (n > 0){
	for (; n <= (2 * start_val); n++){
	    sum += n;
	}
	 
    } else {
	for (; n >= (2 * start_val); n--){
	    sum += n;
	}
    }

    printf("%d\n", sum);
    return 0;
}
