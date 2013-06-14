#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 0;
    printf("%d\n", ++a + a++);
    return 0;
}
