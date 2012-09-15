#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%c%c%c%c%c!\n", "ghi"[1], *("def" + 1), *"abc" + 11, "klm"[1], *"ghi" + 8);
    return 0;
}
