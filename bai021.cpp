// Bài 21: Viết hàm nhập tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày
#include <stdio.h>
#include <math.h>
int Kiem_tra_Thang(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        return 31;
        break;
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        return 30;
        break;
    }
    case 2:
    {
        return ((nam % 400 == 0)
            || (nam % 4 == 0 && nam % 100 != 0)) ? 29 : 28;
        break;
    }
    default:
        return -1;
    }
}
int main()
{
    int thang, nam;
    do
    {
        printf("nhap thang :");
        scanf_s("%d", &thang);
        printf("nhap nam :");
        scanf_s("%d", &nam);
    } while ((thang < 1 || thang > 12) || nam < 1);
    printf("thang %d co %d ngay ", thang, Kiem_tra_Thang(thang, nam));
    return 0;
}