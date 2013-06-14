#include <stdio.h>

int main(int argc, char *argv[])
{
    int count_to = 15, i, j;
    int powers[5];
    printf("::::: A TABLE OF POWERS :::::\n");
    printf("%10s | %10s | %10s | %10s | %10s\n", "Integer", "Square", "Cube", "4th power", "5th power");
    printf("-----------|------------|------------|------------|-----------\n");
    for (i = 0; i < count_to; ++i){
	powers[0] = i + 1;
	for (j = 1; j < 5; ++j){
	    powers[j] = powers[j - 1] * (i + 1);
	}
	printf("%10d | %10d | %10d | %10d | %10d\n", powers[0], powers[1], powers[2], powers[3], powers[4]);
    }
    
    return 0;
}
