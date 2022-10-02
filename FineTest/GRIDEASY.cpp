#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Nhap M = ";
    cin >> m;
    cout << "Nhap N = ";
    cin >> n;

    long long a[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 1;
            else 
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            // a[i][j] = (i == 0 || j == 0) ? 1 : a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << "So cach = " << a[m][n];
    return 0;
}