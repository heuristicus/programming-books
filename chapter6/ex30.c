#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100
#define MAX_STRINGS 1000

void encrypt(char *str);
void decrypt(char *str);
void read_encryption_scheme(char *filename);

char plain[MAX_STR];
char encrypted[MAX_STR];

int main(int argc, char *argv[])
{
    if (argc != 4 || (!strcmp(argv[3], "-e") && !strcmp(argv[3], "-d"))){
	printf("usage: ex30 encryption_scheme [-d|-e] file_to_process\n");
	exit(1);
    }

    read_encryption_scheme(argv[1]);
    
    FILE *fp = fopen(argv[3], "r");
    int i;
    char in[MAX_STR];
            
    for (i = 0; fgets(in, MAX_STR, fp) != NULL; ++i){
	printf("%s\n", in);
	if (strcmp(argv[3], "-d"))
	    encrypt(in);
	else
	    decrypt(in);
	printf("%s\n", in);
    }
    
    return 0;
}

/* encryption scheme should be a file containing two strings separated by a newline character. The first contains normal characters, and the second contains the characters to map each character to. For example, the file containing "aftyo"\n"bycgt" would cause the character 'a' in any plaintext passed to the program to be converted to b, 'f' to 'y', and so on. Each string should not contain the same character more than once.*/
void read_encryption_scheme(char *filename)
{
    FILE *fp = fopen(filename, "r");
    
    if (fgets(plain, MAX_STR, fp) == NULL || fgets(encrypted, MAX_STR, fp) == NULL){
	printf("Invalid file.\n");
	exit(1);
    }
    fclose(fp);
}


void encrypt(char *str)
{
    int len = strlen(str), i;
    
    for (i = 0; i < len; ++i){
	*str[i] = *encrypted[i];
    }
}

void decrypt(char *str)
{
    int len = strlen(str), i;
    
    for (i = 0; i < len; ++i){
	*str[i] = *plain[i];
    }
}

int get_index(char str[], char c, int len)
{
    int i;
    
    for (i = 0; i < len; ++i){
	if (str[i] = c)
	    return i;
    }
    return -1;
    
}
