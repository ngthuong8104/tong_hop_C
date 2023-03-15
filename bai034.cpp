// Bài 34: TÌm mảng con liên tiếp giữa hai mảng 
#include <stdio.h>
int n1, n2, a[100], b[100];
// function enterArray
void enterArray(int x[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter Element [%d] :", i);
        scanf_s("%d", &x[i]);
    }
}

// function printArray
void printArray(int x[], int n)
{
    printf("Values Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}

// function checkSubarray
int checkSubarray(int x1[], int n1, int x2[], int n2)
{
    int result = 0;
    if (n1 >= n2)
    {
        for (int i = 0; i < n1; i++)
        {
            if (x1[i] == x2[0])
            {
                int j = 0;
                for (j; j < n2; j++)
                {
                    if (x1[i + j] != x2[j])
                    {
                        break;
                    }
                }
                result = 1;
            }
        }
    }
    return result;
}
int main()
{
    do
    {
        printf("Enter Element Array A(0<n1<=100) : ");
        scanf_s("%d", &n1);
    } while (n1 <= 0 || n1 > 100);
    // function call 
    enterArray(a, n1);
    printArray(a, n1);
    printf("\n");
    do
    {
        printf("Enter Element Array B(0<n2<=100) : ");
        scanf_s("%d", &n2);
    } while (n2 <= 0 || n2 > 100);
    // function call 2
    enterArray(b, n2);
    printArray(b, n2);
    printf("\n");
    // function call checkSubarray
    if (checkSubarray(a, n1, b, n2))
    {
        printf("=>> Array B Is A Child Of Array A !");
    }
    else
    {
        printf("=>> Array B Is Not A Child Of Array A !");
    }
    return 0;
}