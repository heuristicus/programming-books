#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;
    int digit_cnt = 0, other_cnt = 0;
        
    while ((c = getchar()) != EOF)
	if (c > '0' && c < '9')
	    digit_cnt++;
	else
	    other_cnt++;
    printf("digits: %d, other: %d\n", digit_cnt, other_cnt);
    return 0;
}
