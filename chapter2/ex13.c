#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0, power = 2048;
    
    for (power; (power /= 2) != 0;){
	printf("%-6d ", power);
    }
    return 0;
}
