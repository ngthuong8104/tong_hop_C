// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện chứ lệnh dừng màn hình
#include <math.h>  // khai báo thư viện toán học

// chương trình chính
int main()
{
    // khai báo biên n phần tử
    int n;
    // khai báo i duyệt phần tử
    int i = 1; // bắt đầu bằng 1 mới chia được nhé
    // khai báo biến tổng
    float tong = 0;
    // nhập n
    printf("nhap vao so N : ");
    scanf_s("%d", &n);
    // dùng vòng lặp for hoặc while để tính nhé
    for (i; i <= n; i++)
    {
        tong += ((float)1 / (2 * i)); // nhân thêm 2 ở mẫu vì mẫu là những số chẵn
    }
    // in ra kết quả
    printf("tong = %f", tong);
    _getch();
    return 0;
}