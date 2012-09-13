#include <stdio.h>

int main(int argc, char *argv[])
{
    char *format = "%p %d %d %d\n";
    int i = 3;
    int *p = &i;
    
    printf("%p %p\n", p, p - 2);
    printf(format, p, *p + 7, 3 * **&p + 1, 5 * (p - (p - 2)));
    
    return 0;
}
