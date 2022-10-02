#include <iostream>
#include <cmath>
using namespace std;

long long F(long long n)
{
    long long a = 0, b = 1, temp;
    while (a <= n)
    {
        temp = a;
        a = b;
        b += temp;
    }
    return a;
}
int main()
{
    long long n;
    cin >> n;
    cout << F(n);
    return 0;
}
