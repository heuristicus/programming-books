#include <stdio.h>
#include <ctype.h>


main(){

  int c, i, input = 0;
  int alph[26];

  
  for (i = 0; i < 26; ++i)
    alph[i] = 0;

  while ((c = getchar()) != EOF){
    if (c != ' ' && c != "\t" && c != '\n' && !isdigit(c)){
      ++alph[(c - '0') - 49];
    }
  }

  for (i = 0; i < 26; ++i)
    printf(" %d", alph[i]); 
  printf("\n");
  
}

