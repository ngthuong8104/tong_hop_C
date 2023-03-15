// Bài 36: Viết hàm nhập xuất mảng 2 chiều
#include <stdio.h>
int m, n, a[100][100];

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
            printf(" Enter Element [%d][%d] : ", i, j);
            scanf_s
            ("%d", &x[i][j]);
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
int main()
{
    // function call
    enterArray(a, m, n);
    printArray(a, m, n);
    return 0;
}