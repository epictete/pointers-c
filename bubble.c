#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b)
{
	if (abs(a) > abs(b)) return 1;
	return -1;
}

void bubble(int* A, int n, int (*compare)(int, int))
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (compare(A[j], A[j + 1]) > 0)
			{
				temp = A[j + 1];
				A[j + 1] = A[j];
				A[j] = temp;
			}
		}
	}
}

int main(void)
{
	int i, A[] = {-3, 2, 1, -5, 6, 4};

	bubble(A, 6, compare);

	for (i = 0; i < 6; i++)	printf("%d\n", A[i]);
	
	return 0;
}
