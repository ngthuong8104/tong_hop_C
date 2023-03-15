// Bài 18: Nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
#include <stdio.h>
#include <math.h>

// chương trình chính
int main()
{
    // khai báo biến
    int a, b, c;
    // nhập dữ liệu
    printf("nhap canh a : ");
    scanf_s("%d", &a);
    printf("nhap canh b :");
    scanf_s("%d", &b);
    printf("nhap canh c :");
    scanf_s("%d", &c);

    // xử lí
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("tam giac khong hop le !");
    }
    else
    {
        if (a == b || b == c)
        {
            printf("day la tam giac deu !");
        }
        else
        {
            if ((pow(a, 2) + pow(b, 2) == pow(c, 2))
                || pow(b, 2) + pow(c, 2) == pow(a, 2)
                || pow(c, 2) + pow(a, 2) == pow(b, 2))
            {
                printf("day la tam gia vuong !");
            }
            else if (a == c || b == c || a == b)
            {
                printf("day la tam giac can !");
            }
            else
            {
                printf("day la tam giac thuog !");
            }
        }
    }
    return 0;
}