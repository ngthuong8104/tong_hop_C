// Bài 28: Nhập mảng và tìm max, min trong mang
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
// function maxArray
int maxArray(int x[], int n)
{
    int max = x[0];
    for (int i = 1; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    return max;
}
// function minArray
int minArray(int x[], int n)
{
    int min = x[0];
    for (int i = 0; i < n; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }
    return min;
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
    printf("Max Array = %d", maxArray(a, n));
    printf("\nMin Array = %d", minArray(a, n));
    return 0;
}