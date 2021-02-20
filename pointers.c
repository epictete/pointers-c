#include <stdio.h>

int main()
{
	int a = 1025;
	int size = sizeof(int);
	int *p;
	p = &a;
	printf("Size of integer is %d bytes\n", size);
	printf("Address = %p\n", p);
	printf("Address = %p\n", p+1);
	printf("Value = %d\n", *p);
	printf("Value = %d\n", *(p+1));
}
