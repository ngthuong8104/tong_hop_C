 Bài 43: TÌm ma trận chuyển vị
#include <stdio.h>
int m, n, a[100][100];

 function enterArray
void enterArray(int x[][100], int& m, int& n)
{
    do
    {
        printf("Enter Row : ");
        scanf_s("%d", &m);
        printf("Enter Column : ");
        scanf_s("%d", &n);
    } while (m <= 0 || m > 100 || n <= 0 || n > 100);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" Enter Element [%d][%d] : ", i, j);
            scanf_s("%d", &x[i][j]);
        }
    }
}

 function printArray
void printArray(int x[][100], int m, int n)
{
    printf("\nValues Array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}

 function matrixTransposition 
void matrixTransposition(int x[][100], int m, int n)
{
    int y[100][100];
    int k = n, l = m;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            y[i][j] = x[j][i];
        }
    }
    printf("\nValues Matrix Transposition : \n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("\t%d", y[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    enterArray(a, m, n);
    printArray(a, m, n);
    matrixTransposition(a, m, n);
    return 0;
}
