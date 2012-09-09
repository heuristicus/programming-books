#include <stdio.h>

int main(int argc, char *argv[])
{
    double eps = 1e-19; // smallest positive number
    if (1.0 < (1.0 + eps))
	printf("true\n");
    return 0;
}
