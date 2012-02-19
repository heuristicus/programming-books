#include <stdio.h>

#define LOWER_LIMIT 80
#define BASE_SIZE 200

int getline2(char s[]);

main(){

  int c, len;
  
  while ((len = getline2(line)) > 0){
  }
}

int getline2(){
  int c, i, j;
  char line[BASE_SIZE];

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
    if (i >= sizeof(line)){
      char temp[sizeof(line) * 2];
      for (j = 0; j < sizeof(line); ++i)
	temp[i] = line[i];
      line = temp;
    }
    line[i] = c;
  }
  if (i >= LOWER_LIMIT)
    printf("length: %d\n%s", i, s);
  return i;
}
