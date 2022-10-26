/*
M?t c?a h�ng c� N d? v?t, d? v?t th? k c� tr?ng lu?ng wk v� gi� tr? pk. M?t t�n tr?m l?t v�o c?a h�ng, h?n ch? c� th? l?y tr?m s? d? v?t c� t?ng tr?ng lu?ng t?i da l� W
Ch? ra c�ch l?a ch?n d? v?t sao cho t?ng gi� tr? l?y du?c l� l?n nh?t

*/

#include <iostream>
using namespace std;
struct DoVat
{
	string ten;
	int giaTri, trongLuong;
	DoVat(string ten, int giaTri, int trongLuong)
	{
		this->ten = ten;
		this->giaTri = giaTri;
		this->trongLuong = trongLuong;
	}
};
void sort(struct DoVat arr[], int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if ((float)(arr[i].giaTri) / arr[i].trongLuong < (float)(arr[j].giaTri) / arr[j].trongLuong)
			{
				struct DoVat temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void greedy(struct DoVat arr[], int N, int W)
{
	sort(arr, N);
	int tong = 0;
	int soluong;
	for (int i = 0; i < N; i++)
	{
		soluong = W / arr[i].trongLuong;
		W -= soluong * arr[i].trongLuong;
		tong += soluong * arr[i].giaTri;
		cout << "Chon " << soluong << " do vat " << arr[i].ten << endl;
		
		if(W == 0) break;
	}
	cout << "Tong gia tri lay duoc: " << tong;
}
int main()
{
	int W = 15; // trong luong tui
	DoVat arr[] = {{"1", 4, 12}, {"2", 2, 1}, {"3", 2, 2}, {"4", 10, 4}, {"5", 1, 1}};
	int N = 5;
	for (int i = 0; i < N; i++)
	{
		cout << "Do vat " << i + 1 << ": gia tri = " << arr[i].giaTri << ", trong luong = " << arr[i].trongLuong << endl;
	}
	cout << endl;
	cout << "Gia tri lay duoc nhieu nhat: " << endl;
	greedy(arr, N, W);
	return 0;
}
