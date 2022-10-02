#include <iostream>
using namespace std;

long long g(long long n)
{
    if (n == 1 || n == 3)
        return n;
    
    int k = n / 4;
    if (n % 2 == 0)
        return g(n / 2);
    else if (n % 4 == 1)
        return 2 * g(2 * k + 1) - g(k);
    else
        return 3 * g(2 * k + 1) - 2 * g(k);
}

int main()
{
    long long n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "g(" << n << ") = " << g(n);
    return 0;
}