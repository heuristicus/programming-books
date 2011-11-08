#include <stdio.h>

main(){
  int tab;
  int blank;
  int new;
  int c;


  tab = 0;
  blank = 0;
  new = 0;

  while ((c = getchar()) != EOF){
    if (c == '\t')
      ++tab;
    if (c == '\n')
      ++new;
    if (c == ' ')
      ++blank;
  
  printf("%d %d %d\n", blank, tab, new);
}
