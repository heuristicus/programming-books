#include <stdio.h>

int main(int argc, char *argv[])
{
    int a1, a2, a3, cnt;
    printf("Input three integers:  \n");
    cnt = scanf("%d%d%d", &a1, &a2, &a3);
    printf("Number of successful conversions: %d\n", cnt);
    
    return 0;
}
