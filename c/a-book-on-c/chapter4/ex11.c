#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j;
    
    printf("Input two integers\n");
    scanf("%d%d", &i, &j);
    while (i * j < 0 && ++i != 7 && j++ != 9){
	printf("i: %d, j:%d, i * j: %d\n", i, j, i * j);
    }
    	
    return 0;
}
