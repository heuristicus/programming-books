#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b, c, d, r1, r2;
    int error;
    
    printf("Enter three values.\n");
    while ((error = scanf("%lf%lf%lf", &a, &b, &c)) == 3){
	d = b * b - 4.0 * a * c;
	if (d == 0){
	    if (a != 0.0)
	        r1 = r2 = -b / (2.0 * a);
	    else 
		printf("degenerate case\n");
	} else if (d > 0.0){
	    if (a != 0.0){
		r1 = (-b + sqrt(d)) / (2.0 * a);
		r2 = (-b - sqrt(d)) / (2.0 * a);
	    } else {
		printf("degenerate case\n");
	    }
	} else {
	    printf("imaginary roots!\n");
	}
    

    return 0;
}
