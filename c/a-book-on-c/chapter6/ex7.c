#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    
    printf("%s%lu\n%s%lu\n%s%lu\n", "&a = ", (unsigned long) &a, "&b = ", (unsigned long) &b, "&c = ", (unsigned long) &c);
    return 0;
}
