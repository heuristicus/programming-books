#include <stdio.h>

#define LOWER_LIMIT 80
#define BASE_SIZE 200

int getline2(char s[]);

main(){

  int c, len;
  char line[BASE_SIZE];

  while ((len = getline2(line)) > 0){
  }
}

int getline2(char s[]){
  int c, i;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (i >= LOWER_LIMIT)
    printf("length: %d\n%s", i, s);
  return i;
}
