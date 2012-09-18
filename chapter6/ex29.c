#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define MAX_IN 10000 // max chars in text
#define MAX_STR_LEN 50
#define DICT_SIZE 100

int read_file(char *filename, char *arr[], int size);
void dealloc(char *arr[], int size);
int str_spc_split(char *str, char *arr[]);
int contains(char *arr[], char *str, int len);

int main(int argc, char *argv[])
{
    if (argc != 5){
	printf("usage: ex29 english_words foreign_words replace_text out_file\n");
	exit(1);
    }
	
    char *foreign[DICT_SIZE], *english[DICT_SIZE], *words[MAX_IN];
    int i, words_len;
    
    FILE *fp = fopen(argv[3], "r");
    char tmp[MAX_IN];
    
    fgets(tmp, MAX_IN, fp);
    fclose(fp);

    words_len = str_spc_split(tmp, words);
    
    read_file(argv[1], english, DICT_SIZE);
    read_file(argv[2], foreign, DICT_SIZE);

    fp = fopen(argv[4], "w");

    int wloc;
    
    for (i = 0; i < words_len; ++i){
	if ((wloc = contains(english, words[i], DICT_SIZE))){
	    fputs(foreign[wloc - 1], fp);
	    fputc(' ', fp);
	} else {
	    fputs(words[i], fp);
	    fputc(' ', fp);
	}
	
    }
    fclose(fp);
    
    return 0;
}

/* returns the index of the string in the array if it exists. If in 0th location, returns 1. */
int contains(char *arr[], char *str, int len)
{
    int i;
        
    for (i = 0 ; i < len; ++i){
	if (!strcmp(arr[i], str))
	    return i + 1;
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
    fclose(fp);
    return size;
}

/* returns the last index that something was put into. */
int str_spc_split(char *str, char *arr[])
{
    register char *wrd_strt = str, *cur_ch = str;
    int i, j, len = strlen(str), size;
    printf("%d\n", len);

    for (i = 0, j = 0; j < len; *cur_ch++, ++j){
	if (isblank(*cur_ch) || ispunct(*cur_ch)){
	    size = cur_ch - wrd_strt; // Size of the current word
	    arr[i] = calloc(size + 1, sizeof(char)); // space for terminator
	    strncpy(arr[i], wrd_strt, size);
	    i++;
	    for (; isblank(*cur_ch) || ispunct(*cur_ch); *cur_ch++, ++j);
	    wrd_strt = cur_ch;
	}
    }
    return i;
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
