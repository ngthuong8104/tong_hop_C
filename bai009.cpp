// Bài 9: Tính S(n) = x + x^2 + x^3 + … + x^n
#include <stdio.h>
#include <conio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo và 2 biến x,n
    int n, x;
    // nhập n>0 nếu n<=0 thì nhập lại
    do
    {
        printf("nhap vao so n :");
        scanf_s("%d", &n);
        // điều kiện nhập lại n
        if (n <= 0)
        {
            printf("vui long nhap lai n(n>0>");
        }
    } while (n <= 0);
    // nhập x
    printf("nhap vao so x: ");
    scanf_s("%d", &x);
    // khai báo biến tổng và i
    int tong = 0, i = 1;
    // dùng vòng lặp while or for để tính
    while (i <= n)
    {
        tong += pow(x, i); // pow là hàm mũ trong C
        i++;               // tính tổng xong tăng i lên 1
    }
    // in ra kết quả
    printf("tong = %d", tong);
    _getch(); // dừng màn hình
    return 0;
}