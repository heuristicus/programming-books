#include <stdio.h>

int main(void)
{
    static int cnt;
    if (cnt == 17)
	exit(1);
    printf("The universe is never ending.\n");
    cnt++;
    main();
    return 0;
}
