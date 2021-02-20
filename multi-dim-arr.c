#include <stdio.h>

int main(void)
{
	int A[2][3] = {{2, 3, 6}, {4, 5, 8}};
	printf("%d\n", A[0][0]);
	printf("%d\n", A[1][0]);
	printf("%d\n", *(A[0] + 2));
	printf("%d\n", *(*(A + 1) + 2));
	return 0;
}
