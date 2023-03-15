// Bài 23: Viết hàm đệ quy tính giai thừa 
// và tính số fibonaci 
#include <stdio.h>
#include <math.h>
// ham tinh gia thua
int Tinh_GT(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * Tinh_GT(n - 1);
	}
}
// ham tinh Fibonaci
int tinh_Fibonaci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return tinh_Fibonaci(n - 1) + tinh_Fibonaci(n - 2);
	}
}
int main()
{
	int n;
	do
	{
		printf("nhap vao so n = ");
		scanf_s("%d", &n);
	} while (n < 0);
	printf("\nSo %d! = %d", n, Tinh_GT(n));
	printf("\nSo Fibonaci(%d) = %d", n, tinh_Fibonaci(n));
	return 0;
}