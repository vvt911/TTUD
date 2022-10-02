#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], b[MAX], m, n, count = 0;

int sum(int k)
{
    int s = 0;
    for (int i = 1; i <= k; i++)
    {
        s += a[i];
    }
    return s;
}
void print(int k)
{
    cout << n << " = " << a[1];
    for (int i = 2; i < k; i++)
    {
        cout << "+" << a[i];
    }
    cout << endl;
    count++;
}
void gen(int k)
{
    int s = sum(k - 1);
    if (s > n)
        return;
    if (s == n)
    {
        print(k);
        return;
    }
    for (int i = n - s + 1; i >= 1; i--)
    {
        a[k] = i;
        if (a[k] > a[k - 1] && k > 1)
            continue;
        gen(k + 1);
    }
}
int main()
{
    cout << "Nhap n = ";
    cin >> n;
    a[0] = 0;
    gen(1);
}