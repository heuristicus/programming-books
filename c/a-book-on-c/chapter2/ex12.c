#include <stdio.h>

int main(int argc, char *argv[])
{
    int power = 2048;
    
    while ((power /= 2) > 0)
	printf("%-6d ", power);
    return 0;
}
