#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[] = "abc";
    const char *p = s;
    
    *p = 'A';
    printf("%s\n", s);
    return 0;
}
