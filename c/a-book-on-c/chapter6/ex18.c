#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    char *p = a;
    char *q = a + strlen(a) - 3;
    
    printf("a = %s\n", a);
    strcpy(p, q);
    printf("a = %s\n", a);
    return 0;
}
