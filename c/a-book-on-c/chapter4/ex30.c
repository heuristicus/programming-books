#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 0;
    
start: {
	printf("hallo\n");
	x++;
    }
    if (x < 10)
	goto start;
       
    x = 0;
   
    while (x < 10){
	printf("hellow\n");
	x++;
    }
    return 0;
}
