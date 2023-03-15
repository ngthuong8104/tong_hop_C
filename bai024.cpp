// Bài 24: Viết hàm đệ quy chuyển từ hệ
// thập phân sang nhị phân 
#include <stdio.h>
#include <math.h>

// ham nhi phan 
void printNhi_Phan(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printNhi_Phan(n / 2);
        int r = n % 2;
        printf("%d", r);
    }
}

int main()
{
    int n;
    do
    {
        printf("nhap n (n>=0) : ");
        scanf_s("%d", &n);
    } while (n < 0);
    printf("he nhi phan : ");
    printNhi_Phan(n);
    return 0;
}
