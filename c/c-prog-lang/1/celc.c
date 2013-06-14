#include <stdio.h>

main(){
  int lower, upper, step;
  float fahr, celsius;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("%7s %10s\n", "Celsius", "Fahrenheit");
  while(celsius <= upper){
    fahr = (9.0/5.0)*celsius+32;
    printf("%7.0f %10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
