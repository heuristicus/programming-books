#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0;
    char r;
    FILE *ifp;
    
    if (argc != 2){
	printf("input a filename\n");
	exit(1);
    }
    
    ifp = fopen(argv[1], "r");
    while ((r = getc(ifp)) != EOF){
	switch (r){
	case 'a':
	case 'A':
	    ++a;
	    break;
	case 'b':
	case 'B':
	    ++b;
	    break;
	case 'c':
	case 'C':
	    ++c;
	    break;
	}
    }
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    return 0;
}
