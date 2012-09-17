#include <stdio.h>

int main(int argc, char *argv[])
{
    char *p = "abc";
    *p = 'X';
    printf("%s\n", p);
    return 0;
}
