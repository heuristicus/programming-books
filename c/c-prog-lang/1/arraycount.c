#include <stdio.h>

main(){
  int c, i, white, other;
  int ndigit[10];
  
  white = other = 0;
  for (i = 0; i < 10; ++i)
    ndigit [i] = 0;
  
  while ((c = getchar()) != EOF){
    if (c >= '0' && c < '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == "\t" || c == '\n')
      ++white;
    else 
      ++other;
  }
  
  printf("digits = ");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white = %d, other = %d\n", white, other);
}
