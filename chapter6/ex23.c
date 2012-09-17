#include <stdio.h>
#include <assert.h>

#define N 20

typedef const char cchr;

void add(int sum[], int a[], int b[]);
void wrt(cchr *s, int a[], int size);
void multiply(int mult[], int a[], int b[]);

int main(int argc, char *argv[])
{
    int a[N] = {0, 0, 0, 0, 9, 0, 0, 0, 0, 1}; /* numbers are in reverse here */
    int b[N] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    //int a[N] = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    //int b[N] = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    
    int mult[N * 2] = {0};
            
    multiply(mult, a, b);
    wrt("integer a: ", a, sizeof(a)/sizeof(int));
    wrt("integer b: ", b, sizeof(b)/sizeof(int));
    wrt("      mult: ", mult, sizeof(mult)/sizeof(int));
        
    return 0;
}

/* assumes mult array is large enough for sizeof(a) * 2 values 
   3 digits * 3 digits = max 6 digits
 */
void multiply(int mult[], int a[], int b[])
{
    int i, j, temp = 0, carry = 0, col = 0;
    
    for (i = 0; i < N; ++i){
	for (j = 0; j < N; ++j){
	    if (a[j] == 0 && b[i] == 0 && carry == 0)
		continue;
	    
	    temp = (a[j] * b[i]) + carry;
	    if (temp < 10)
		carry = 0;
	    else
		carry = temp / 10;

            /* if the values in the current column (units, 10s, etc.) exceeds 9, need to add that excess onto the next column */
	    col = mult[j + i] + temp % 10;

	    if (col > 9){
		mult[j + i] = col % 10;
		carry += col - 9;
	    } else 
		mult[j + i] += temp % 10;

//	    printf("i: %2d, j: %2d, %2d, %2d, temp %2d, carry %2d ", i, j, a[j], b[i], temp, carry);
	    //wrt("mult ", mult);
	}
    }
}

void wrt(cchr *s, int a[], int size)
{
    int i;
    printf("%s", s);
    // leading zeroes blank
    for (i = size - 1; i > 0 && a[i] == 0; --i)
	putchar(' ');
        
    // print remaining digits, including zero
    for (; i >= 0; --i){
	printf("%d", a[i]);
	if (i % 3 == 0)
	    putchar(' ');
    }
    putchar('\n');
}
