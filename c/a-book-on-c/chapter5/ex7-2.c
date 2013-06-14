#include <stdio.h>

int main(int argc, char *argv[])
{
    int c, cnt = 0;
    double val, sum = 0;
    
    while((c = scanf("%lf", &val)) != EOF){
	sum += val;
	cnt++;
    }
    printf("Average: %.10lf\n", sum / cnt);
    return 0;
}
