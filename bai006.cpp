// Bài 6: Nhập vào 1 tháng và cho biết tháng đó nằm trong quý mấy
#include <stdio.h> // khai báo thư viện nhập xuất
#include <conio.h> // khai báo thư viện dừng màn hình

// chương trình chính
int main()
{
    // khai báo biến tháng
    int thang;
    // nhập thang
    printf("nhap vao thang : ");
    scanf_s("%d", &thang);
    // dùng if else or switch case đều được nhé
    if (thang == 1 || thang == 2 || thang == 3)
    {
        printf("thang %d nam trong quy 1 ", thang);
    }
    else if (thang == 4 || thang == 5 || thang == 6)
    {
        printf("thang %d nam trong quy 2", thang);
    }
    else if (thang == 7 || thang == 8 || thang == 9)
    {
        printf("thang %d nam trong quy 3", thang);
    }
    else if (thang == 10 || thang == 11 || thang == 12)
    {
        printf(" thang %d nam trong quy 4", thang);
    }
    // k đúng điêu kiện nào của tháng thì sẽ in ra
    else
        printf("du lieu khong hop le ");
    _getch(); // dừng màn hình
    return 0;
}