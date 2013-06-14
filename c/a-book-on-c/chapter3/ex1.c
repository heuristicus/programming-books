#include <stdio.h>

int main(int argc, char *argv[])
{
    double x = 123.45123451234512345;
    double y = 123.45123451234510000;
    printf("%.17f\n%.17f\n", x, y);
    return 0;
}
