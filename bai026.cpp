// Bài 26: Viết hàm nhập mảng 
// tính trung bình cộng mảng 
// tính trung bình cộng các số dương 
#include <stdio.h>
#include <math.h>
// function Enter Array
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf_s("%d", &a[i]);
    }
}
// function Average Array
float averageArray(int a[], int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += a[i];
    }
    return (float)Sum / n;
}
// function Average Positive Number 
float positiveNumber(int a[], int n)
{
    int Sum = 0, positivenumber = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            Sum += a[i];
            positivenumber++;
        }
    }
    return positivenumber > 0 ? (float)Sum / positivenumber : -1;
}
int main()
{
    int n, a[100];
    do
    {
        printf("Enter Element n(0<n<=100) : ");
        scanf_s("%d", &n);
    } while (n < 0 || n>100);
    enterArray(a, n);
    printf("\nAverage Array = %.2f", averageArray(a, n));
    printf("\nAverage Positive Number = %.2f", positiveNumber(a, n));
    return 0;
}
