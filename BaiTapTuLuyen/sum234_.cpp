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
    if(F(n) > 0)
        cout << F(n);
    else  
        cout << F(n) % 1000000007;
    return 0;
}