#include <iostream>
#include <map>
using namespace std;

map<long, long long> f;

long long F(long long n)
{
    if (n == 1)
        return 0;
    if (f[n] == 0)
    {
        if (n % 2 == 0)
            f[n] = 1 + F(n / 2);
        else if (n % 2 != 0)
            f[n] = 1 + F(3 * n + 1);
    }
    return f[n];
}

int main()
{
    long long n;
    cin >> n;
    cout << F(n);
}