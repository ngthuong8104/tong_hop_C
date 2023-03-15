// Bài 13: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo biến
    int n, i = 1;
    // nhập dữ liệu
    do
    {
        printf("nhap vao so n : ");
        scanf_s("%d", &n);
        if (n <= 0)
        {
            printf("nhap lai n (n>0)");
        }
    } while (n <= 0);
    // xử lí
    printf("cac uoc so le cua %d la : ", n);
    while (i <= n)
    {
        // kiểm tra điều kiện
        if (n % i == 0)
        {
            if (i % 2 != 0)
            {
                printf("\t%d", i);
            }
        }
        // kiểm tra xong tăng i lên 1
        i++;
    }
    _getch();
    return 0;
}