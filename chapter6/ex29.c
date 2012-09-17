#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_IN 500
#define MAX_STR_LEN 50
#define DICT_SIZE 100

int read_file(char *filename, char *arr[], int size);
void dealloc(char *arr[], int size);
void str_spc_split(char *str, char *arr[]);

int main(int argc, char *argv[])
{
    if (argc != 4){
	printf("usage: ex29 english_words foreign_words replace_text\n");
	exit(1);
    }
	
    char *foreign[DICT_SIZE], *english[DICT_SIZE], *words[MAX_IN];
    int i;
    
    char *tmp = "thake that, koward! you are unpermitted in this place!";
    str_spc_split(tmp, words);
    for (i = 0; i < MAX_IN; ++i)
	printf("%s\n", words[i]);

    return 0;
    
    read_file(argv[1], english, DICT_SIZE);
    read_file(argv[2], foreign, DICT_SIZE);
    read_file(argv[3], words, MAX_IN);
    

    
    for (i = 0; i < MAX_IN; ++i){
	printf("%s ", words[i]);
    }    
    return 0;
}

/* returns the last index that something was allocated to */
int read_file(char *filename, char *arr[], int size)
{
    FILE *fp = fopen(filename, "r");
    char tmp[MAX_STR_LEN], *tmp2;
    int i;
    
    for (i = 0; i < size; ++i){
	    
	if (fgets(tmp, MAX_STR_LEN, fp) == NULL)
	    return i;
		
	arr[i] = calloc(strlen(tmp) + 1, sizeof(char));

	if ((tmp2 = strchr(tmp, '\n')) != NULL)
	    *tmp2 = '\0';
	strcpy(arr[i], tmp);
    }
    
    return size;
}

void str_spc_split(char *str, char *arr[])
{
    register char *wrd_strt = str, *cur_ch = str;
    int i, len = strlen(str), size;

    for (i = 0; i < len; ++i, *cur_ch++){
	if (isblank(*cur_ch) || ispunct(*cur_ch)){
	    size = cur_ch - wrd_strt + 1; // Size of the current word, plus one space for terminator
	    
	    printf("size of word %d\n", size);
	}
    }
}

/* frees all allocated memory in the array */
void dealloc(char *arr[], int size)
{
    int i;
        
    for (i = 0; i < size; ++i){
	if (arr[i] != NULL)
	    free(arr[i]);
    } 
}
