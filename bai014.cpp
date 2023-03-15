// Bài 14: Tính tổng và đếm số lượng tất cả các “ước số chẵn” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo các biến
    int n, i = 1, dem = 0, tong = 0;
    // nhập dữ liệu
    do
    {
        printf("\nnhap so n : ");
        scanf_s("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so n (n>0)");
        }
    } while (n <= 0);
    // xử lí
    printf("cac uoc chan cua %d la : ", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
            {
                printf("\t%d", i);
                // tăng biến đếm lên 1 và tính tổng
                dem++;
                tong += i;
            }
        }
        // xong điều kiện tănng i lên 1;
        i++;
    }
    // in kết quả
    printf("\nso luong uoc chan cua %d la : %d", n, dem);
    printf("\ntong cac uoc chan la : %d", tong);
    _getch();
    return 0;
}