// Bài 27: Nhập mảng và sắp xếp mảng thep chiều
// tăng dần, giảm dần 
#include <stdio.h>
// function Enter Array
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf_s("%d", &a[i]);
    }
}
// function swap
void swap(int& a, int& b)
{
    int temporary = a;
    a = b;
    b = temporary;
}
// function Array Increase 
void arrayIncrease(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int locationMax = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[locationMax])
            {
                locationMax = j;
            }
        }
        swap(a[i], a[locationMax]);
    }
}

// function Array Decrease 
void arrayDecrease(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int locationMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[locationMin])
            {
                locationMin = j;
            }
        }
        swap(a[i], a[locationMin]);
    }
}

//function print Array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
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
    printf("Array Increase : ");
    arrayIncrease(a, n);
    printArray(a, n);
    printf("\nArray Decrease : ");
    arrayDecrease(a, n);
    printArray(a, n);
    return 0;
}