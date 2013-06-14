#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y = 0;
    
    //x = 1 / y;
    x = 1 / 0;
    printf("x = %d\n", x);
    return 0;
}
