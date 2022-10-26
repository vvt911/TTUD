#include <iostream>
using namespace std;

bool checkTamGiacVuong(int a, int b, int c)
{
    if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        return true;
    return false;
}

int demTamGiacVuong(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - i; j++)
        {
            for (int k = j + 1; k < n - i - j; k++)
            {
                if ((i + j + k) <= n && checkTamGiacVuong(i, j, k))
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << demTamGiacVuong(n);
}