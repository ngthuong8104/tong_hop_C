// Bài 42: Xóa một dòng hoặc cột trong mảng hai chiều
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
            scanf_s("%d", &x[i][j]);
        }
    }
}


// function printArray
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

// function deleteRowArray
void deleteRowArray(int x[][100], int& m, int n)
{
    int row;
    printf("\nEnter Row Delete : ");
    scanf_s("%d", &row);
    for (int i = row; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[i][j] = x[i + 1][j];
        }
    }
    m--;
}

// function deleteColumnArray
void deleteColumnArray(int x[][100], int m, int& n)
{
    int column;
    printf("\nEnter Column Delete : ");
    scanf_s("%d", &column);
    for (int i = 0; i < m; i++)
    {
        for (int j = column; j < n; j++)
        {
            x[i][j] = x[i][j + 1];
        }
    }
    n--;
}
int main()
{
    // function call
    enterArray(a, m, n);
    printArray(a, m, n);
    deleteRowArray(a, m, n);
    printArray(a, m, n);
    deleteColumnArray(a, m, n);
    printArray(a, m, n);
    return 0;
}