#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 7, j = 7;
    
    if (i == 1)
	if (j == 2)
	    printf("%d\n", i = i + j);
	else
	    printf("%d\n", i = i - j);
    printf("%d\n", i);
    return 0;
}
