#include <iostream>
#include <map>
using namespace std;

map <int, long long> f;

long long F(int n)
{
    if (n <= 0)
        return (n == 0) ? 1 : 0;
    
    if (f[n] == 0)
        f[n] = F(n - 2) + F(n - 3);
    return f[n];
}

int main()
{
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}