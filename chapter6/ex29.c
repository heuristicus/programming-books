#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_IN 500
#define MAX_STR_LEN 50
#define DICT_SIZE 100

char *foreign[DICT_SIZE];
char *english[DICT_SIZE];

void read_dict(char *filename, char *arr[]);


int main(int argc, char *argv[])
{
    if (argc != 3){
	printf("usage: ex29 english_words foreign_words\n");
	exit(1);
    }
	
    extern char *foreign[DICT_SIZE], *english[DICT_SIZE];
    
    read_dict(argv[1], english);
    read_dict(argv[2], foreign);
    
    int i = 0;

    for (; i < DICT_SIZE; ++i){
//	printf("eng: %s, for %s\n", english[i], foreign[i]);
    }

    char *words[MAX_IN];
    char c;
    
//    while((c = scanf("%s", &*words[i])) != EOF && ++i < MAX_IN);
    
    return 0;
}

void read_dict(char *filename, char *arr[])
{
    FILE *fp = fopen(filename, "r");
    char tmp[MAX_STR_LEN], *tmp2;
    int i;
    
    for (i = 0; i < DICT_SIZE; ++i){
	    
	if (fgets(tmp, MAX_STR_LEN, fp) == NULL)
	    printf("Error while reading from file %s.\n", filename);
	printf("%s", tmp);
	arr[i] = calloc(strlen(tmp) + 1, sizeof(char));
	if ((tmp2 = strchr(tmp, '\n')) != NULL)
	    *tmp2 = '\0';
	printf("%s\n", tmp);
	arr[i] = tmp;
	printf("\n");
    }
    
    
}
