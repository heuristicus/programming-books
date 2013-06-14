#include <stdio.h>

int main(int argc, char *argv[])
{
    char c1, c2, c3;
    int cnt;
    
    printf("Input three characters:  \n");
    cnt = scanf("%c%c%c", &c1, &c2, &c3);
    printf("Number of successful conversions: %d\n", cnt);
    return 0;
}
