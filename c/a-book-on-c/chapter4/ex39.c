#include <stdio.h>
#include <math.h>

double fact(int n);

int main(int argc, char *argv[])
{
    int n, cnt = 0;
    double e = 1, olde;
    
    //printf("Iterations?\n");
    //scanf("%d", &n);
    while (e != olde){
	olde = e;
	e += 1.0 / fact(++cnt);
	printf("cnt %d, olde %.15f, e %.15f\n", cnt, olde, e);
    }
    printf("e = %.15f\n", e);
    return 0;
}

double fact(int n)
{
    return n == 0 ? 1 : n * fact(n - 1);
}
