// Bài 11: Tính S(n) = 1 + 1/1 + 2 +…+ 1/ 1 + 2 + 3 +…+ N
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
        printf("nhap N:");
        scanf_s("%d", &n);
        // điều kiện nhập lại n
        if (n <= 0)
        {
            printf("nhap lai n(n>0)");
        }
    } while (n <= 0);
    // khai báo tổng
    float tong = 0;
    // khai báo i và t
    int i = 1;
    // biến t duyệt ở mẫu
    int T = 0;
    // dùng vòng lặp while or for tính
    while (i <= n)
    {
        T += i;
        tong += ((float)1 / T);
        // tính xong tổng tăng i lên 1
        i++;
    }
    // in ra tổng
    printf("tong = %f", tong);
    _getch();
    return 0;
}
