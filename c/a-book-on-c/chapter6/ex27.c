#include <stdio.h>

int main(int argc, char *argv[])
{
    char *p = "abc", *q = "abc";
    
    if (p == q)
	printf("two strings have same address\n");
    else
	printf("the addresses are different\n");
	
    return 0;
}
