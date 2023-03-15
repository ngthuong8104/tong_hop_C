// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện chứa hàm dừng màn hình
#include <math.h>  // khai báo thư viện toán học

// chương trình chính
int main()
{
    // khai báo n
    int n;
    // khai báo i phần tử
    int i;
    // khai báo tổng =0;
    float tong = 0;
    // nhập n;
    printf("nhap vao so n:");
    scanf_s("%d", &n);
    // dùng vòng lặp for để tính tổng
    for (i = 0; i <= n; i++)
    {
        tong += ((float)1 / (2 * i + 1)); // ép kiểu để chia
    }
    // in ra kết quả
    printf("tong = %f", tong);
    _getch();
    return 0;
}