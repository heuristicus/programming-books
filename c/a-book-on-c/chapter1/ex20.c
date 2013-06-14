#include <stdio.h>

int main(int argc, char *argv[])
{
    int cnt;
    
    cnt = printf("abc\0abc\0");
    printf("\nNo of characters printed: %d\n", cnt);
    return 0;
}
