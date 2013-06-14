#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[20];
    int age;
    printf("Hi, what's your name?\n");
    scanf("%20s", &name);
    printf("You look young, but how old are you really?\n");
    scanf("%d", &age);
    printf("Hello %s, next year you will be %d.\n", name, age + 1);
    return 0;
}
