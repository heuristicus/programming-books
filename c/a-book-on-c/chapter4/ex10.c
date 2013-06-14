#include <stdio.h>

#define LIMIT 10

int main(int argc, char *argv[])
{
    int i = 0, j;
            
    while (++i < LIMIT) do {
	    j = 2 * i + 3;
	    printf("j = %d\n", j);
    }
    return 0;
}
