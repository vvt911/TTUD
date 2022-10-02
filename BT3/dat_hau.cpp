#include <iostream>
using namespace std;

const int MAX = 100;

int n, a[MAX], dem = 0;
bool b[MAX], c[MAX], d[MAX];

void inKetQua()
{
    cout << "\n\nCach dat hau thu " << ++dem;
    for (int i = 1; i <= n; i++)
    {
        cout << endl;
        for (int j = 1; j <= n; j++)
            if (j == a[i])
                cout << " x";
            else
                cout << " .";
    }
}

// dat quan hau o dong thu k
void dat(int k)
{
    if (k > n)
    {
        inKetQua();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i] && c[n + k - i] && d[k + i])
        {
            b[i] = c[n + k - i] = d[k + i] = false;
            a[k] = i;
            dat(k + 1);
            b[i] = c[n + k - i] = d[k + i] = true;
        }
    }
}

int main()
{
    cout << "N = ";
    cin >> n;
    for (int i = 0; i < MAX; i++)
        b[i] = c[i] = d[i] = true;
    dat(1);
    cout << "\nCo "<< dem << " cach dat hau";
    return 0;
}