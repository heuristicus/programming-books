#include <stdio.h>

int main(int argc, char *argv[]){
  int numbers[4] = {0};
  char name[4] = {'a'};
  
  printf ("numbers: %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf ("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);

  printf ("name %s\n", name);

  //char name_int[4] = {'a', 'b', 'c', 'd'};
  
  //Using 4 byte char array to represent 4 byte integer (?) 
  //printf("The integer in the name_int array is: %d.\n", name_int[0] + name_int[1] + name_int[2] + name_int[3]);
  
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';
  
  printf ("numbers: %d, %d, %d, %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
  printf ("name each: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
  
  printf ("name %s\n", name);

  char *another = "Zed";
  
  printf ("another: %s\n", another);

  return 0;
}
