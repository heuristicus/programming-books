#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
    int a, b, cnt = 0, i;
    
    srand(time(NULL));
    for (i = 0; i < 1000; ++i){
	a = rand() % 3 + 1;
	b = rand() % 30 + 1;
	if (b -  a <= 1)
	    continue;
	assert(b - a > 2);
	printf("%3d\n", ++cnt);
    }
    return 0;
}
