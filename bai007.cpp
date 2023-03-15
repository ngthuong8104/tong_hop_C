// Bài 7: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện dừng màn hinh
#include <math.h>  // khai báo thư viện toán học

// chương trình chính
int main()
{
    // khai báo và nhập n
    int n;
    // nhập n>0 nếu n<=0 nhập lại
    do
    {
        printf("nhap vao so n : ");
        scanf_s("%d", &n);
        // điều kiện nhập lại n
        if (n <= 0)
        {
            printf("nhap lại n(n>0> !");
        }
    } while (n <= 0);
    // khai báo tổng và i duyệt phần tử
    int tong = 1, i = 1; // i và tổng phải =1 nhé !
    // dùng vòng lặp while or for để tính
    while (i <= n) // điều kiện lặp
    {
        tong = 1 * tong * i;
        i++; // sau khi tính tổng xong sẽ tăng i lên 1
    }
    // in ra kết quả
    printf("tong = %d", tong);
    _getch(); // dừng màn hình
    return 0;
}
