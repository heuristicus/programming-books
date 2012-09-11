#include <stdio.h>

int main(int argc, char *argv[])
{
    int L = -3;
    if (L < 0)
	goto L;
    printf("L = %d\n", L);
L: printf("Exiting label test!\n");
    return 0;
}
