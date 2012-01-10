#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double chtemp(int fahrval);

main(){
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, chtemp(fahr));
}

double chtemp(int fahrval){
  return (5.0/9.0)*(fahrval-32);
}
      
