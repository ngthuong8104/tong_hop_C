// Bài 22:Viết chương trình C nhập vào ngày tháng năm
// 1. Cho biết tháng đó có bao nhiêu ngày
// 2. Tính xem ngày đó là ngày thứ bao nhiêu trong năm
// 3. Tim ngày trước đó ngày vừa nhập
// 4. Tính ngày kế đó ngày vừa  nhập

#include <stdio.h>
#include <math.h>
// hàm tìm số ngày của tháng
int Ngay_trong_thang(int thang, int nam)
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
        return((nam % 400 == 0)
            || (nam % 4 == 0 && nam % 100 != 0)) ? 29 : 28;
        break;
    }
    default: return -1;
    }
}
// hàm tìm ngày thứ bn trong năm
int Ngay_trong_nam(int ngay, int thang, int nam)
{
    int ntn = 0;
    for (int i = 1; i < thang; i++)
    {
        ntn += Ngay_trong_thang(i, nam);
    }
    ntn += ngay;
    return ntn;
}
// hàm tìm ngày trước đó
int Ngay_truoc_do(int ngay, int thang, int nam)
{
    if (ngay == 1)
    {
        if (thang == 1)
        {
            ngay = 31;
            thang = 12;
            nam--;
        }
        else
        {
            ngay = Ngay_trong_thang(thang, nam);
            thang--;
        }
    }
    else
    {
        ngay--;
    }
    printf("\nngay truoc la : %d/%d/%d", ngay, thang, nam);
    return 0;
}
// hàm tìm ngày kế tiếp
int Ngay_ke_tiep(int ngay, int thang, int nam)
{
    int nct = Ngay_trong_thang(thang, nam);
    if (ngay == nct)
    {
        if (thang == 12)
        {
            ngay = 1;
            thang = 1;
            nam++;
        }
        else
        {
            ngay = 1;
            thang++;
        }
    }
    else
    {
        ngay++;
    }
    printf("\nngay ke la : %d/%d/%d", ngay, thang, nam);
    return 0;
}
int main()
{
    int ngay, thang, nam;
    do
    {
        printf("nhap ngay, thang, nam (dd mm yy): ");
        scanf_s("%d%d%d", &ngay, &thang, &nam);
    } while ((ngay<1 || ngay>Ngay_trong_thang(thang, nam)
        || (thang < 1 || thang>12) || nam < 1));
    // 1. in thang co bn ngay
    printf("thang %d co %d ngay", thang, Ngay_trong_thang(thang, nam));
    // 2. tìm ngày trong năm
    printf("\nngay thu : %d", Ngay_trong_nam(ngay, thang, nam));
    // 3. ngày trước đó
    Ngay_truoc_do(ngay, thang, nam);
    // 4. ngày kế tiếp
    Ngay_ke_tiep(ngay, thang, nam);
    return 0;
}