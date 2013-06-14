#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Memory required for data types:\nchar: %d\nshort: %d\nint: %d\nunsigned: %d\nlong: %d\nfloat: %d\ndouble: %d\nlong double: %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(unsigned), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}
