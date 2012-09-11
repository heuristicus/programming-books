#include <stdio.h>

int main(int argc, char *argv[])
{
    int blank_cnt = 0, c, digit_cnt = 0, letter_cnt = 0, upper_cnt = 0, nl_cnt = 0, other_cnt= 0;
    
    while ((c = getchar()) != EOF)
	if (c == ' ')
	    blank_cnt++;
	else if (c >= '0' && c <= '9')
	    digit_cnt++;
	else if (c >= 'a' && c <= 'z')
	    letter_cnt++;
	else if (c >= 'A' && c <= 'Z')
	    upper_cnt++;
	else if (c == '\n')
	    nl_cnt++;
	else 
	    other_cnt++;
    printf("%10s%10s%10s%10s%10s%10s%10s\n\n", "blanks", "digits", "letters", "uppers", "newlines", "others", "total");
    printf("%10d%10d%10d%10d%10d%10d%10d\n\n", blank_cnt, digit_cnt, letter_cnt, upper_cnt, nl_cnt, other_cnt, blank_cnt + digit_cnt + letter_cnt + upper_cnt + nl_cnt + other_cnt);
    return 0;
}
