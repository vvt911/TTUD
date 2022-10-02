#include<iostream>
using namespace std;

const int MAX = 100;
int n, a[MAX], m;

int F(int tong, int n)
{
    if(n == 0)
        if(tong == 0)
            return 1;
        else return 0;
    else return F(tong, n - 1) + F(tong - a[n], n-1);
}

int main()
{
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    
    cout << "Co tat ca " << F(m, n) << " cach phan tich.";
    return 0;
}