/* DO NOT LOOK AT THIS FILE - TERRIBLE Code */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_IN 500

int in_list(char c[100][20], char *word, int length);
void replace_words(char words[MAX_IN][30], char english[100][20], char foreign[100][20]);

int main(int argc, char *argv[])
{
    if (argc != 3){
	printf("usage: ex29 100_foreign_words 100_english_words\n");
	exit(1);
    }
	
    char foreign[100][20], english[100][20];
    FILE *eng, *frn;
    eng = fopen(argv[2], "r");
    frn = fopen(argv[1], "r");
        
    int i;
    
    /* oh god this is horrible */
    for (i = 0; i < 100; ++i){
	fgets(english[i], 100, eng);
	fgets(foreign[i], 100, frn);
	char *pos;
	if ((pos=strchr(english[i], '\n')) != NULL)
	    *pos = '\0';
	if ((pos=strchr(foreign[i], '\n')) != NULL)
	    *pos = '\0';
    }

    char words[MAX_IN][30];
    char c;
    
    i = 0;
        
    while((c = scanf("%s", &*words[i])) != EOF && ++i < MAX_IN);
    
    for (i = 0; i < MAX_IN; ++i)
	printf("%s ", words[i]);
    
    replace_words(words, english, foreign);
    
    
    for (i = 0; i < MAX_IN; ++i)
	printf("%s ", words[i]);
    

    return 0;
}

int in_list(char c[100][20], char *word, int length)
{
    int i;
    
    for (i = 0; i < length; ++i){
	if (strcmp(c[i], word) == 0)
	    return i;
    }
    return 0;
}

void replace_words(char words[MAX_IN][30], char english[100][20], char foreign[100][20])
{
    int i;
    int index;
    
    for (i = 0; i < MAX_IN; ++i){
	if ((index = in_list(english, words[i], 100))){
	    printf("in dict %s\n", words[i]);
	    for (; *foreign[index] != '\0' && *words[i] != '\0'; ++*foreign[index], ++*words[i]){
		*words[i] = *foreign[index];
	    }
	    
	}
    }
}
