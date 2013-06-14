#include <stdio.h>

int z;

void f (int x)
{
    x = 2;
    z += x;
}

int main(int argc, char *argv[])
{
    z = 5;
    f(z);
    printf("z = %d\n", z);
    return 0;
}
