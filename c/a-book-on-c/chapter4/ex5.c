#include <stdio.h>

#define FEDERAL_WITHHOLDING_TAX_PERCENT 17.0
#define STATE_WITHOLDING_TAX_PERCENT 3.0

int main(int argc, char *argv[])
{
    double salary, fed_tax_val, state_tax_val, salary_total = 0, fed_total = 0, state_total = 0;
    
    printf("Enter salary\n");
        
    while (scanf("%lf", &salary) == 1){
	fed_tax_val = FEDERAL_WITHHOLDING_TAX_PERCENT / 100 * salary;
	state_tax_val = STATE_WITHOLDING_TAX_PERCENT / 100 * salary;
	
	salary_total += salary;
	fed_total += fed_tax_val;
	state_total += state_tax_val;
		
	printf("salary: $%.2lf\nfederal tax: $%.2lf\nstate tax: $%.2lf\n", salary, fed_tax_val, state_tax_val);
	printf("Enter salary\n");
    }
    printf("\n\nTotal salary: $%.2lf\nFederal tax total: $%.2lf\nState tax total: $%.2lf\n", salary_total, fed_total, state_total);
    return 0;
}
