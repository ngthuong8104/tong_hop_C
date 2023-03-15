//Bai 3: Tính S(n) = 1 + ½ + 1 / 3 + … + 1 / n
#include <stdio.h> // khai báo hàm nhập xuất
#include <conio.h> // khai báo thư viện chứa câu lệnh dừng màn hình
#include <math.h>  // thư viện chứa các hàm toán học

// chương trình chính
int main()
{
    // khai báo n phần tử
    int n;
    // khai báo i để tính tổng
    int i = 1; // phải bắt đầu bằng 1 mới chia được nha các bạn
    // khai báo tong giá trị ban đầu là 0;
    float tong = 0;
    // nhập n
    printf("nhap vao so n :");
    scanf_s("%d", &n);
    while (i <= n)
    {
        tong += ((float)1 / i); // ép kiểu để chia nha các bạn
        i++;                    // tính tổng xong rồi tăng i lên 1
    }
    // in ra kết quả là xong nha các bạn
    printf("tong = %f", tong);
    _getch(); // dừng màn hình
    return 0;
}