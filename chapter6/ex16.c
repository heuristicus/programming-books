#include "merge.h"

int main(int argc, char *argv[])
{
    int sz, i = 0;
    
    scanf("%d", &sz);
    int key[sz];
    
    while((scanf("%d", &key[i])) == 1 && i++ < sz);

    printf("before\n");
    wrt(key, sz);
    mergesort(key, sz);
    printf("after\n");
    wrt(key, sz);
        
    return 0;
}

void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n)
	if (a[i] < b[j])
	    c[k++] = a[i++];
	else
	    c[k++] = b[j++];
    while (i < m)
	c[k++] = a[i++];
    while (j < n)
	c[k++] = b[j++];
}

void mergesort(int key[], int n)
{
    int j, k, *w;
    
    w = calloc(n, sizeof(int));
    assert(w != NULL);




    free(w);
}

void wrt(int key[], int sz)
{
    int i;
    
    for (i = 0; i < sz; ++i){
	printf("%4d%s", key[i], ((i < sz - 1) ? "" : "\n"));
    }
}
