// Bài 30: Nhập mảng và in mảng ngược lại
#include <stdio.h>
// function enterArray
void enterArray(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf_s("%d", &x[i]);
    }
}
// function reverseArray
void reverseArray(int x[], int n)
{
    for (int i = 0; i <= n / 2; i++)
    {
        int temporary = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = temporary;
    }
}
// function printArray
void printArray(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", x[i]);
    }
}
int main()
{
    int n, a[100];
    do
    {
        printf("Enter Element n(0<n<=100) : ");
        scanf_s("%d", &n);
    } while (n <= 0 || n > 100);
    enterArray(a, n);
    printf("Array : ");
    printArray(a, n);
    printf("\nReverse Array : ");
    reverseArray(a, n);
    printArray(a, n);
    return 0;
}