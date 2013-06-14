#include <stdio.h>

int main(int argc, char *argv[])
{
    char c = 'A';
    
    printf("sizeof(c) = %u\n", sizeof(c));
    printf("sizeof('A')= %u\n", sizeof('A'));
    printf("sizeof(c + c) = %u\n", sizeof(c + c));
    printf("sizeof(c = 'A') = %u\n", sizeof(c = 'A'));
    return 0;
}
