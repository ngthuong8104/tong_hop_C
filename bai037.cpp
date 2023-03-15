// Bài 37: Tìm kiếm trong mảng hai chiều
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

// functionprintArray
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

// function Search
int Search(int x[][100], int m, int n, int values)
{
    int result = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] == values)
            {
                result = 1;
            }
        }
    }
    return result;
}

// function performSearch
void performSearch(int x[][100], int m, int n)
{
    int option;
    do
    {
        int values;
        printf("Enter Search Values : ");
        scanf_s("%d", &values);
        if (Search(a, m, n, values))
        {
            printf("Find !");
        }
        else
        {
            printf("Not Find !");
        }
        printf("\nEnter Any Numbers To Continue, Enter Zero To Exit : ");
        scanf_s("%d", &option);
    } while (option != 0);
}
int main()
{
    // function call;
    enterArray(a, m, n);
    printArray(a, m, n);
    performSearch(a, m, n);
    return 0;
}