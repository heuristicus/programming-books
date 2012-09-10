#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int a, b, c, discriminant;
    
    printf("Enter three integers.\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((discriminant = pow(b, b) - 4 * a * c) >= 0)
	printf("%.6f\n", sqrt(discriminant));
    else
	printf("i * %.6f\n", sqrt(-discriminant));
    printf("%d\n", discriminant
);
    return 0;
}
