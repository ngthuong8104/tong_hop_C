// Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện dừng màn hình
#include <math.h>  // khai báo thư viện toán học

// chương trình chính
int main()
{
    // khai báo và nhập n
    int n;
    // nhập n >0 nếu n<=0 nhập lại
    do
    {
        printf("nhap vao so n :");
        scanf_s("%d", &n);
        // điều kiện nhập lại n
        if (n <= 0)
        {
            printf("vui long nhap lai n(n>0)");
        }
    } while (n <= 0);
    // khai báo biến tổng và i
    float tong = 0;
    int i = 0;
    // dùng vòng lặp while or for để tính nhé
    while (i <= n)
    {
        tong += ((float)(2 * i + 1) / (2 * i + 2));
        i++; // tính tổng xong sẽ tăng i lên 1
    }
    // in ra kết quả
    printf("tong = %f", tong);
    _getch(); // dừng màn hình
    return 0;
}