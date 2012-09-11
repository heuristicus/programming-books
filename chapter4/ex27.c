#include <stdio.h>

int main(int argc, char *argv[])
{
    int l_par = 0, r_par = 0, l_br = 0, r_br = 0, cur;
    FILE *ifp;
    
    if (argc != 2)
    {
	printf("Supply exactly one filename. Its bracket pairing will be checked.\n");
	exit(1);
    }
    
    ifp = fopen(argv[1], "r");
    while ((cur = getc(ifp)) != EOF){
	switch (cur) {
	case '{':
	    l_br++;
	    break;
	case '(':
	    l_par++;
	    break;
	case '}':
	    r_br++;
	    if (r_br > l_br)
		printf("??");
	    break;
	case ')':
	    r_par++;
	    if (r_par > l_par)
		printf("??");
	    break;
	}
	putchar(cur);
    }
    
    if ((r_br = l_br - r_br) > 0){
	printf("ERROR: missing right braces: ");
	for (; r_br > 0; r_br--, putchar('}'));
	putchar('\n');
    }
    
    if ((r_par = l_par - r_par) > 0){
	printf("ERROR: missing right parens: ");
	for (; r_par > 0; r_par--, putchar(')'));
	putchar('\n');
    }

    return 0;
}

