#include <stdio.h>
#include <stdlib.h>

void PrintHello(char* name)
{
    printf("Hello %s\n", name);
}

int Add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int c;
    int (*p)(int, int);

    p = &Add; // "Add" will also work (see below)
    c = (*p)(2, 3); // "p(2, 3)" will also work (see below)

    printf("Sum = %d\n", c);

    void (*ptr)(char*);
    
    ptr = PrintHello;
    ptr("John");

    return 0;
}