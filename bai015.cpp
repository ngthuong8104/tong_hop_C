// Bài 15: Tính tổng các ước số lẻ nhỏ hơn số nguyên dương N
// và tìm ra ước số lẻ lớn nhất
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo biến
    int n, i = 1, max = 1, tong = 0;
    // nhập dữ liệu
    do
    {
        printf("\nnhap vao so N :");
        scanf_s("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai so N(n>0)!");
        }
    } while (n <= 0);
    // xử lí
    printf("cac uoc le cua %d la : ", n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                printf("\t%d", i);
                if (i < n)
                {
                    tong += i;
                }
                if (i > max)
                {
                    max = i;
                }
            }
        }
        // kiểm tra xong điều kiện tăng i lên 1
        i++;
    }
    // in kết quả
    printf("\ntong = %d", tong);
    printf("\nmax = %d", max);
    _getch();
    return 0;
}