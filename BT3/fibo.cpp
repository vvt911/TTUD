#include <iostream>
using namespace std;

const int MAX = 100;
int f[MAX];

int fibo(int n)
{
    if (n < 2)  return n;
    if (f[n] == -1) f[n] = fibo(n-1) + fibo(n-2);
    return f[n];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < MAX; i++)
    {
        f[i] = -1;
    }
    cout << "fibo(" << n << ") = " << fibo(n);
    return 0;
}