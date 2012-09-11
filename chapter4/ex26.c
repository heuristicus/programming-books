#include <stdio.h>

int main(int argc, char *argv[])
{
    int left = 0, right = 0, cur;
    FILE *ifp;
    
    if (argc != 2)
    {
	printf("Supply exactly one filename. Its bracket pairing will be checked.\n");
	exit(1);
    }
    
    ifp = fopen(argv[1], "r");
    while ((cur = getc(ifp)) != EOF){
	if (cur == '{'){
	    left++;
	} else if (cur == '}'){
	    right++;
	    if (right > left)
		printf("??");
	}
	putchar(cur);
    }
    if ((right = left - right) > 0){
	printf("ERROR: missing right braces: ");
	for (; right > 0; right--, putchar('}'));
	putchar('\n');
    }
    
    return 0;
}
