// Bài 20: Viết hàm in ra các SNT nhỏ hơn n (n>1)
#include <stdio.h>
#include <math.h>
int KTSNT(int x)
{
    if (x <= 1)
        return 0;
    for (int j = 2; j <= sqrt(x); j++)
    {
        if (x % j == 0)
            return 0;
    }
    return 1;
}
// chương trình chính
int main()
{
    // khai báo biến
    int n;
    // nhập dữ liệu
    do
    {
        printf("nhap N :");
        scanf_s("%d", &n);
    } while (n < 1);
    printf("cac SNT nho hon %d la : ", n);
    for (int i = 2; i <= n; i++)
    {
        if (KTSNT(i))
        {
            printf("\t%d", i);
        }
    }
    return 0;
}