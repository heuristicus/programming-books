#include <stdio.h>

main(){
  int cur;
  int prev;

  while ((cur = getchar()) != EOF){
    if (cur == ' ' && prev == ' ')
      ;
    else
      putchar(cur);
    prev = cur;
  }
}
