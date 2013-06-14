#include <stdio.h>

#define OUNCES_IN_POUND 16.0
#define GRAMS_IN_OUNCE 28.35

float imperial_to_metric(float pounds, float oz);

int main(int argc, char *argv[])
{
    float pounds, ounces;
    
    printf("Enter weight in pounds:\n");
    scanf("%f", &pounds);
    printf("Any ounces to add to that? (0 if none)\n");
    scanf("%f", &ounces);
    
    printf("Your item weighs %f kilograms.\n", imperial_to_metric(pounds, ounces));
	
    return 0;
}

float imperial_to_metric(float pounds, float oz)
{
    float grams;
    
    grams = ((pounds * OUNCES_IN_POUND) + oz) * GRAMS_IN_OUNCE;
    return grams/1000;
}
