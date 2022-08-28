#include <stdio.h>


void nhapMangMotChieu(int arr[], int n)
{
	int i;
	printf("Nhập vào các phần tử của mảng: \n");

	for (i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}


void xuatMang(int arr[], int n)
{
	int i;
	printf("----------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("\n a[%d] = %d", i, arr[i]);
	}
}


// Tìm số lớn nhất trong mảng
int timSoLonNhat(int arr[], int n)
{
	int i, max =0;
	for ( i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


// Đếm số phần tử == x trong mảng
int demPhanTuX(int arr[], int n, int x)
{
	int i, result = 0;
	for ( i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			result++;
		}
	}
	return result;
}


// Tìm X trong mảng - Có: 1, KO: 0
bool timX(int arr[], int n, int x)
{
	int i;
	bool rs = false;
	while (i<n && rs == false)
	{
		if (arr[i] == x)
		{
			rs = true;
		}
		i++;
	}
	return rs;
}




// ------------ MAIN --------------
int main()
{
	int n;
	int a[20];

	printf("Nhập độ dài của mảng: \n");
	scanf("%d", &n);

	nhapMangMotChieu(a, n);
	xuatMang(a, n);
	printf("Số lớn nhất trong mảng: %d \n", timSoLonNhat(a, n));

	int x;
	printf("\n Nhập vào x muốn đếm: ");
	fflush(stdin);
	scanf("%d", &x);
	printf("\n Số phần tử bằng x có trong mảng: %d", demPhanTuX(a, n, x));

	int y;
	printf("\n Nhập vào x: ");
	fflush(stdin);
	scanf("%d", &y);
	printf("\n Có phần tử x trong mảng: %s", timX(a, n, y)? "true" : "false");

	return 0;
}
