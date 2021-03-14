# include <stdio.h>

void PrintSpiral(int* A[], int m, int n)
{
    int T = 0;
    int B = m - 1;
    int L = 0;
    int R = n - 1;
    int dir = 0;

    while (L <= R && T <= B)
    {
        if (dir == 0)
        {
            for (int i = L; i <= R; i++)
                printf("%d ", A[T][i]);
            T++;
        }
        else if (dir == 1)
        {
            for (int i = T; i <= B; i++)
                printf("%d ", A[i][R]);
            R--;
        }
        else if (dir == 2)
        {
            for (int i = R; i >= L; i--)
                printf("%d ", A[B][i]);
            B--;
        }
        else if (dir == 3)
        {
            for (int i = B; i >= T; i--)
                printf("%d ", A[i][L]);
            L++;
        }
        dir  = (dir + 1) % 4;
    }
}

int main(void)
{
    int row0[] = {2, 4, 6, 8};
    int row1[] = {5, 9, 12, 16};
    int row2[] = {2, 11, 5, 9};
    int row3[] = {3, 2, 1, 8};
    int* A[4];

    A[0] = row0;
    A[1] = row1;
    A[2] = row2;
    A[3] = row3;

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(row0) / sizeof(row0[0]);

    PrintSpiral(A, m, n);

    return 0;
}