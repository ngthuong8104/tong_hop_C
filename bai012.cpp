// BÀI 12 : Tính tổng và tích của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo và nhập n
    int n;
    // nhập n>0, n<=0 nhập lại
    do
    {
        printf("\nnhap vao so n:");
        scanf_s("%d", &n);
        // điều kiện nhập n
        if (n <= 0)
        {
            printf("nhap lai n(n>0)!");
        }
    } while (n <= 0);
    // khai báo i duyệt các ước
    int i;
    // khai báo biến tổng và tích
    int tong = 0, tich = 1;
    // dùng vòng lặp for or while để tính
    printf("cac uoc cua %d la : ", n);
    for (i = 1; i <= n; i++)
    {
        // điều kiện để tính
        if (n % i == 0)
        {
            // in ra các ước rồi tính
            printf("\t%d", i);
            tong += i;
            tich *= i;
        }
    }
    // in ra kết quả
    printf("\ntong la = %d", tong);
    printf("\ntich la = %d", tich);
    _getch(); // dừng màn hình
    return 0;
}