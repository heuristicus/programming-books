/* try with compiler switch -funsigned-char */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char c = -1;
    signed char s = -1;
    unsigned char u = -1;
    
    printf("c = %d  s = %d  u = %d\n", c, s, u);
    return 0;
}
