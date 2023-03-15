// Bài 10: Liệt kê tất cả các “ước số” của số nguyên dương n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo và nhập n
    int n;
    // nhập n>0 nếu n<=0 nhập lại
    do
    {
        printf("\nnhap vao so n : "); // \n kí tự xuống dòng
        scanf_s("%d", &n);
        // điều kiện nhập lại n
        if (n <= 0)
        {
            printf("nhap lai n(n>0)");
        }
    } while (n <= 0);
    // khai báo i
    int i;
    // dùng for or while để tính
    for (i = 1; i <= n; i++)
    {
        // điều kiện để tính
        if (n % i == 0)
        {
            printf("\t%d", i); // in ra i là các ước của n
        }
    }
    _getch(); // dừng màn hình
    return 0;
}