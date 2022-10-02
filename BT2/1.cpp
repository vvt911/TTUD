#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, n, a[100];
    cout << "Nhap k = ";
    cin >> k;
    cout << "Nhap n = ";
    cin >> n;

    cout << "Nhap mang A:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] - a[j]) == k)
            {
                count++;
            }
        }
    }
    cout << "Co " << count << " cap so chenh lech nhau " << k << " don vi";
    return 0;
}