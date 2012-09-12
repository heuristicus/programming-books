#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int cur, prev = -1, n, cnt, seq, alt, l_alt, l_seq;
    
    srand(time(NULL));
    
    printf("Times to run?\n");
    scanf("%d", &n);
    for (cnt = 0, seq = 0, alt = 0, l_seq = 0, l_alt = 0; cnt < n; cnt++){
	cur = rand() % 2;
	if (prev != cur){
	    alt++;
	    l_seq = (seq < l_seq) ? l_seq : seq;
	    seq = 0;
	} else {
	    seq++;
	    l_alt = (alt < l_alt) ? l_alt : alt;
	    alt = 0;
	}
	prev = cur;
	cnt++;
    }

    printf("longest sequence: %d, longest alternating sequence %d\n", l_seq, l_alt);	

    return 0;
}
