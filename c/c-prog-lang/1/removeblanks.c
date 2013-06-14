#include <stdio.h>

#define ARR_SIZE 300

int removeblanks();

main(){
  
  int len;

  while ((len = removeblanks()) != 0){}

}

int removeblanks(){
  int i, c, j;
  char line[ARR_SIZE];

  printf("%s", line);

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    line [i] = c;

  for (j = sizeof(line); j > 0; ++j){
    if (line[j] == ' ' || line[j] == '\t')
      line[j] = '\0';
  }
  
  return i;
}
