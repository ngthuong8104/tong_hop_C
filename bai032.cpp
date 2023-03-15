// Bài 32: Tìm phần tử max, min lớn thứ 2 trong mảng
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
// function enterArray
void enterArray(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] : ", i);
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
// function searchMax2
int searchMax2(int x[], int n)
{
    int max = INT_MIN, maxTwo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == max)
        {
            continue;
        }
        else
        {
            if (x[i] > maxTwo)
            {
                maxTwo = x[i];
            }
        }
    }
    return maxTwo;
}
// function searchMin2
int searchMin2(int x[], int n)
{
    int min = INT_MAX, minTwo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == min)
        {
            continue;
        }
        else
        {
            if (x[i] < minTwo)
            {
                minTwo = x[i];
            }
        }
    }
    return minTwo;
}
int main()
{
    // change color
    system("color 2");
    int n, a[100];
    do
    {
        printf("Enter Element n(0<n<=100) : ");
        scanf_s("%d", &n);
    } while (n <= 0 || n > 100);
    enterArray(a, n);
    printArray(a, n);
    printf("\nMax_Two = %d ", searchMax2(a, n));
    printf("\nMin_Two = %d ", searchMin2(a, n));
    return 0;
}