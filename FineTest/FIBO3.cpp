#include <iostream>
using namespace std;

long long f(long long n)
{
    if (n <= 2)
        return n;
    long k = n / 3;

    if (n % 3 == 0)
        return f(2 * k);
    else if (n % 3 == 1)
        return f(2 * k) + f(2 * k + 1);
    else
        return f(2 * k) + f(2 * k + 1) + f(2 * k + 2);
}

int main()
{
    long long n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "f(" << n << ") = " << f(n);
    return 0;
}