#include <stdio.h>

int main(int argc, char *argv[])
{
    char a[] = "abc";
    char *p;
    int i;
    
    p = a;
    for (i = 0; i < 3; ++i)
	printf("%c\n", *p++);
    printf("a = %s\n", a);
    p = a;
    for (i = 0; i < 3; ++i)
	printf("%c\n", (*p)++);
    printf("a = %s\n", a);
    
    return 0;
}
