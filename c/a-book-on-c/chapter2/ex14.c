#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b = 0, c = 0;
    
    a = ++b + ++c; // 2
    printf("%d %d %d\n", a, b, c);
    a = b++ + c++; // 2
    printf("%d %d %d\n", a, b, c);
    a = ++b + c++; // 5
    printf("%d %d %d\n", a, b, c);
    a = b-- + --c; // 5
    printf("%d %d %d\n", a, b, c);
    return 0;
}
