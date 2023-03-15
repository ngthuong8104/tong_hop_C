// Bài 40: Sắp xếp mảng hai chiều tăng, giảm dần
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

// fucntion printArray
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

// function sortArrayDecrease
void sortArrayDecrease(int x[][100], int m, int n)
{
    int k = m * n;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (x[i / n][i % n] < x[j / n][j % n])
            {
                int temp = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = temp;
            }
        }
    }
}

// function sortArrayIncrease
void sortArrayIncrease(int x[][100], int m, int n)
{
    int k = m * n;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (x[i / n][i % n] > x[j / n][j % n])
            {
                int temp = x[i / n][i % n];
                x[i / n][i % n] = x[j / n][j % n];
                x[j / n][j % n] = temp;
            }
        }
    }
}
int main()
{
    // function call
    enterArray(a, m, n);
    printArray(a, m, n);
    sortArrayDecrease(a, m, n);
    printArray(a, m, n);
    sortArrayIncrease(a, m, n);
    printArray(a, m, n);
    return 0;
}