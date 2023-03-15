// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện chứa câu lệnh dùng màn hình
#include <math.h>  // thư viện chưa các hàm toán học

// chương trình chính
int main()
{
    // khai báo biến n phần tử
    int n;
    // khai báo biến i duyệt các phần tưt tính tổng
    int i = 0;
    // khai báo biến tổng giá trị bằng =0
    int tong = 0;
    printf("nhap vao so N :");
    scanf_s("%d", &n);
    while (i <= n) // có thể dùng for nhá các bạn
    {
        tong += pow(i, 2); // pow là hàm mũ trong C các bạn nhé
        i++;
    }
    // giờ xuất ra tổng là xong nhé các bạn .
    printf("tong = %d", tong);
    //_getch(); // dừng màn hình
    return 0;
}