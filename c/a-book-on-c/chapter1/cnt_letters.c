#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int c, i, letter[26];
    FILE *ifp, *ofp;
    
    if (argc != 3){
	printf("\n%s%s%s\n\n%s\n%s\n\n", "Usage:  ", argv[0], "  infile outfile", "The uppercase letters in infile will be counted.", "The results will be written in outfile.");
	exit(1);
    }
    
    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[2], "w");
    
    return 0;
}
