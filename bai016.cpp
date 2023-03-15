// Bài 16: Giải phương trình bậc nhất ax + b =0
#include <stdio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo biến
    float a, b, x;
    printf("nhap he so a :");
    scanf_s("%f", &a);
    printf("nhap he so b :");
    scanf_s("%f", &b);

    // xử lí
    if (a == 0)
    {
        if (b == 0)
        {
            printf("phuong trinh co vo so nghiem");
        }
        else
        {
            printf("phuong trinh vo nghiem");
        }
    }
    else
    {
        x = -b / a;
        printf("phuong trinh co nghiem x = %.2f", x);
    }
    return 0;
}