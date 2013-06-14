#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int sum, i;
    char c;
    
    for (i = 0; (c = getchar()) != EOF; ++i){
	if (isalpha(c))
	{
	    sum += 1;
	}
    }
    printf("Number of letters: %d\n", sum);
    return 0;
}
