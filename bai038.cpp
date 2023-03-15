// Bài 38: Tìm max, min trong mảng hai chiều
#include <stdio.h>
int m, n, a[100][100], option;
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
    printf("Values Array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}

// function searchMaxArray
int searchMAxArray(int x[][100], int m, int n)
{
    int max = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] > max)
            {
                max = x[i][j];
            }
        }
    }
    return max;
}

// function searchMinArray
int searchMinArray(int x[][100], int m, int n)
{
    int min = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] < min)
            {
                min = x[i][j];
            }
        }
    }
    return min;
}
int main()
{
    do
    {
        // function call
        enterArray(a, m, n);
        printArray(a, m, n);
        printf("\nMax Array = %d ", searchMAxArray(a, m, n));
        printf("\nMin Array = %d ", searchMinArray(a, m, n));
        printf("\nEnter Any Numbers To Continue, Enter Zero Numbers To Exit : ");
        scanf_s("%d", &option);
    } while (option != 0);
    return 0;
}