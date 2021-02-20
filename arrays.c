#include <stdio.h>

int main()
{
	int A[] = {2, 3, 5, 8, 1};

	for (int i = 0; i < 5; i++)
	{
		printf("Address = %p\n", &A[i]);
		printf("Address = %p\n", A+i);
		printf("Value = %d\n", A[i]);
		printf("Value = %d\n", *(A+i));
	}

	return 0;
}
