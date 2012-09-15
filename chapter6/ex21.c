#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define CHAR_LIMIT 100

int main(int argc, char *argv[])
{
    char s[100];
    printf("Enter a string. Will check if it's a palindrome.\n");
    scanf("%s", s);
    
    int i, j, end = strlen(s) - 1;
        
    for (i = 0, j = 0; i < strlen(s); ++i){
	if (isblank(s[i]))
	    continue;
	s[j] = tolower(s[i]);
	++j;
    }

    for (i = 0; i < strlen(s); ++i, --end){
	if (s[i] != s[end]){
	    printf("Not a palindrome.\n");
	    exit(1);
	}
    }
    printf("Yay, a palindrome.\n");
    
    return 0;
}
