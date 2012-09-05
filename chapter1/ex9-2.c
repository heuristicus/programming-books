#include <stdio.h>

#define OFFSET "                 "
#define HEIGHT 10
#define TOP_BOTTOM_SPACE "\n\n\n\n\n"

int main(int argc, char *argv[])
{
    int i;
    printf(TOP_BOTTOM_SPACE);
    printf(OFFSET "CCCCCCCCCCCCCCCCCCCC\n");
    for (i = 0; i < HEIGHT; ++i){
	printf(OFFSET "CCC\n");
    }
    printf(OFFSET "CCCCCCCCCCCCCCCCCCCC\n");
    printf(TOP_BOTTOM_SPACE);
    return 0;
}
