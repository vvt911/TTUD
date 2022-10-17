#include <iostream>
using namespace std;

int k;

int f(int k, int n)
{
    if (n == 1)
    {
        if (k == 1)
            return 1;
        else
            return 0;
    }

    int h = k - n;
    if (h == 0)
        return f(k, n - 1) + 1;
    else if (h < n)
        return f(k, n - 1) + f(h, h);
    else
        return f(k, n - 1) + f(h, n - 1);
}

int main()
{
    int k;
    cout << "Nhap k = ";
    cin >> k;

    cout << "Co tat ca " << f(k, k) - 1 << " cach phan tich.";
    return 0;
}