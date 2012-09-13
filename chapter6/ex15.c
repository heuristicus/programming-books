#include <stdio.h>

void bubble(int a[], int n);
void swap(int *p, int *q);
void scan_to_arr(char *message, int p[], int n);

int main(int argc, char *argv[])
{
    int n;
    
    printf("How many numbers are you going to sort?\n");
    scanf("%d", &n);
    
    int a[n];
    scan_to_arr("Enter numbers to sort.", a, n);
    bubble(a, n);
    int i;
    
    for (i = 0; i <= n; i++){
	printf("%d\n", a[i]);
    }
    return 0;
}


void bubble(int a[], int n)
{
    int i, j, skip;
    
    for (i = 0, skip = 0; i < n - 1; ++i){
	printf("Bubble\n");
	for (j = n - 1; j > i; --j){
	    if (a[j - 1] > a[j])
		swap(&a[j-1], &a[j]);
	    else
		skip++;
	}
	if (skip == n - 1){
	    printf("No interchanges this run, finished.\n");
	    return;
	}
    }
}


void swap(int *p, int *q)
{
    int tmp;
    
    tmp = *p;
    *p = *q;
    *q = tmp;
}


void scan_to_arr(char *message, int p[], int n)
{
    int i = 0;
    printf("%s\n", message);
    while ((scanf("%d", &p[i])) == 1 && i++ < n);
}
