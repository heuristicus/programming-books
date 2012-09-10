#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, error;
    
    do {
	printf("Input a number between 1 and 3 (inclusive)\n");
	scanf("%d", &i);
	
    } while (error = (i < 1 && i > 3));
    
    if (i == 1){
	printf("statement 2 executed\n");
    } else if (i == 2){
	printf("statement 1 executed\n");
	printf("statement 3 executed\n");
    } else {
	printf("statement 3 executed\n");
    }
    
    return 0;
}
