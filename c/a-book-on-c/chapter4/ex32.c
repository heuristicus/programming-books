#include <stdio.h>

int main(int argc, char *argv[])
{
    for (putchar('1'); putchar('2'); putchar('3')){
	putchar('4');
	continue;
	putchar('5');
    }
    return 0;
}