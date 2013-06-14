#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if (argc == 1){
    printf("You've not entered any arguments!\n");
  }else if (argc == 2){
    printf("You have only one argument.\n");
  } else if (argc > 2 && argc < 4){
      printf("Here are your arguments:\n");
      for (i = 0; i < argc; i++){
	printf("%s ", argv[i]);
      }
      printf("\n");
  } else {
    printf("You have too many arguments\n");
  }
  
  return 0;
}

