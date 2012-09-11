#include <stdio.h>

int main(int argc, char *argv[])
{
    int c, cnt = 0, digit_cnt = 0, i, n, total = 0;
    
    while ((c = getchar()) != 'E'){
	++cnt;
	if (c >= '0' && c <= '9')
	    ++digit_cnt;
    }
    
    i = -5;
    n = 50;
    while (i < n){
	++i;
	if (i != 0)
	    total += i;
	printf("i = %d and total = %d\n", i , total);
    }
    return 0;
}
