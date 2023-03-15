// Bài 19: Viết hàm kiểm tra SNT
#include <stdio.h>
#include <math.h>
int kiemtraSNT(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    // khai báo biến
    int n;
    // nhập dữ liệu
    printf("nhap N : ");
    scanf_s("%d", &n);
    // gọi hàm
    int kt = kiemtraSNT(n);
    if (kt == 0)
    {
        printf("%d khong la so nguyen to ", n);
    }
    else
    {
        printf("%d la so nguyen to ", n);
    }
    return 0;
}