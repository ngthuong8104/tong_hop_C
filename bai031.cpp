// Bài 31: Nhập mảng và tìm kiếm trong mảng 
// Bài này mình mắc định 0 : là không tìm thấy 
// 1: là tìm thấy nhé !
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
// function printArray
void printArray(int x[], int n)
{
    printf("Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
}
// function Search
int Search(int x[], int n, int search)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == search)
        {
            result = 1;
            return 1;
        }
    }
    return result;
}
// function performSearch
void performSearch(int x[], int n)
{
    int search;
    printf("Enter Value Search : ");
    scanf_s("%d", &search);
    int result = Search(x, n, search);
    if (result == 1)
    {
        printf("Find !");
    }
    else
    {
        printf("Not Find !");
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
    printArray(a, n);
    printf("\n");
    performSearch(a, n);
    return 0;
}