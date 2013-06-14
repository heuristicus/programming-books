#include <stdio.h>

void change_it(int []);

int main(int argc, char *argv[])
{
    int a[5], *p;
    p = a;
    printf("p has the value %p\n", p);
    change_it(a);
    p = a;
    printf("p has the value %p\n", p);
    return 0;
}

void change_it(int a[])
{
    int i = 777, *q = &i;
    a = q;
}
