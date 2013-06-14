#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int jan = 0, feb = 0, mar = 0, apr = 0, may = 0, jun = 0, jul = 0, aug = 0, sep = 0, oct = 0, nov = 0, dec = 0;
    
    int n, i, j, k, rand, tnum, maxppl;
        
    printf("Input trials to run and how many people to test up to.\n");
    scanf("%d%d", &n, &maxppl);
    
    for (i = 0; i < maxppl; i++){
	for (j = 0; j < n; j++){
	    for (k = 0; k < i; k++){
		rand = lrand48() % 12 + 1;
		switch (rand){
		case 1:
		    jan++;
		    break;
		case 2:
		    feb++;
		    break;
		case 3:
		    mar++;
		    break;
		case 4:
		    apr++;
		    break;
		case 5:
		    may++;
		    break;
		case 6:
		    jun++;
		    break;
		case 7:
		    jul++;
		    break;
		case 8:
		    aug++;
		    break;
		case 9:
		    sep++;
		    break;
		case 10:
		    oct++;
		    break;
		case 11:
		    nov++;
		    break;
		case 12:
		    dec++;
		    break;
		}
		
	    }
	    if (jan == 2 || feb == 2 || mar == 2 || apr == 2 || may == 2 || jun == 2 || jul == 2 || aug == 2 || sep == 2 || oct == 2 || nov == 2 || dec == 2){
		tnum++;
	    }
	    jan = feb = mar = apr = may = jun = jul = aug = sep = oct = nov = dec = 0;
	}
	printf("Number of true trials: %d\n", tnum);
	printf("Simulated probability for %d people: %f\n", i, (double) tnum / (double) n);
	tnum = 0;
    }
    return 0;
}
