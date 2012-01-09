#include <stdio.h>

#define MAX_WORD_LENGTH 10

main(){
 
  int c, i, j, wlen = 0;
  int nchar[MAX_WORD_LENGTH];
  
  for (i = 0; i < MAX_WORD_LENGTH; ++i)
    nchar[i] = 0;

  while ((c = getchar()) != EOF){
    if (c == ' ' || c == "\t" || c == '\n'){
      ++nchar[wlen];
      // printf("%d\n", wlen);
      wlen = 0;
    } else {
      ++wlen;
    }
  }

  // horizontal print
  for (i = 0; i < MAX_WORD_LENGTH; ++i){
    for (j = 0; j < nchar[i]; ++j)
      printf("#");
    printf("\n");
  }
	
  // vertical print
  //for (i = 0; i < MAX_WORD_LENGTH; ++i)
    
}
