// Bài 39: Chuyển Mảng hai chiều thành mảng một chiều
#include <stdio.h>
int m, n, a[100][100], b[10000], k;

// function enterArray
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
            printf(" Enter Elemnet [%d][%d] : ", i, j);
            scanf_s("%d", &x[i][j]);
        }
    }
}

// function printArray
void printArray(int x[][100], int m, int n)
{
    printf("Values Array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}

// function transferArray
void transferArray(int x[][100], int m, int n, int y[], int& k)
{
    int index = 0;
    k = m * n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y[index] = x[i][j];
            index++;
        }
    }
}

// function printTransferArray
void printTransferArray(int y[], int k)
{
    printf("Array : ");
    for (int i = 0; i < k; i++)
    {
        printf("\t%d", y[i]);
    }
}
int main()
{
    // function call
    enterArray(a, m, n);
    printArray(a, m, n);
    transferArray(a, m, n, b, k);
    printTransferArray(b, k);
    return 0;
}