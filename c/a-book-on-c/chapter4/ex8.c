#include <stdio.h>

int main(int argc, char *argv[])
{
    char c = 'A';
    double x = 1e+33, y = 0.001;
    
    printf("%d %d %d\n", c == 'a', c == 'b', c != 'c');
    printf("%d\n", c == 'A' && c <= 'B' || 'C');
    printf("%d\n", 1 != !!c == !!!c);
    printf("%d\n", x + y > x - y);
    return 0;
}
