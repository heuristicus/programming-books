#include <stdio.h>
#include <string.h>

#define CHAR_LIMIT 100

int main(int argc, char *argv[])
{
    char s[100];
    printf("Enter a string. Will check if it's a palindrome.\n");
    scanf("%s", s);
    
    int i = 0, end = strlen(s) - 1;
    
    for (; i < strlen(s); ++i, --end){
	if (s[i] != s[end]){
	    printf("Not a palindrome.\n");
	    exit(1);
	    
	}
    }
    printf("Yay, a palindrome.\n");
    
    return 0;
}
