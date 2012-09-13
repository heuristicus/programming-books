#include <stdio.h>
#include <stddef.h>

int main(int argc, char *argv[])
{
    int a, b, *p = &a, *q = &b;
    ptrdiff_t diff = p - q;
    printf("diff = %d\n", diff);
    diff = p - (ptrdiff_t *) 0;
    printf("diff = %d\n", diff);
    return 0;
}
