#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;
int a[MAX], b[MAX], m, n, total = 0, dem = 0;
void nhap()
{
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    sort(a, a + n);
}
void gen(int k, int i)
{
    if (total >= m)
    {
        if (total == m)
            dem++;
        return;
    }
    for (; i < n; i++)
    {
        total += a[i];
        b[k] = a[i];
        gen(k + 1, i + 1);
        total -= a[i];
    }
}
int main()
{
    nhap();
    gen(0, 0);
    cout << "Co tat ca " << dem << " cach phan tich.";
    return 0;
}