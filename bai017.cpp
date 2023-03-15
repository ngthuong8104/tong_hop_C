// Bài 17 : Giải phương trình bậc 2 ax^2+bx+c=0
#include <stdio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo biến
    float a, b, c, x1, x2, delta;
    // nhập dữ liệu
    printf("nhap he so a :");
    scanf_s("%f", &a);
    printf("nhap he so b :");
    scanf_s("%f", &b);
    printf("nhap he so c :");
    scanf_s("%f", &c);
    // xử lí
    delta = pow(b, 2) - 4 * a * c;
    if (a == 0)
    {
        printf("khong tinh duoc, a phai khac 0");
    }
    else
    {
        if (delta > 0)
        {
            printf("phuong trinh co 2 nghiem phan bet :");
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f , x2 = %.2f", x1, x2);
        }
        else if (delta == 0)
        {
            printf("phuong trinh co nghiem kep :");
            x1 = -b / (2 * a);
            printf("x1 = x2 = %.2f", x1);
        }
        else
        {
            printf("phuong trinh vo nghiem !");
        }
    }
    return 0;
}