#include <stdio.h>

int main(int argc, char *argv[])
{
    int miles, yards;
    float kilometres;
    
    miles = 26;
    yards = 385;
    kilometres = 1.609 * (miles + yards / 1760);
    printf("\nA marathon is %f kilometres.\n\n", kilometres);
    return 0;
}
