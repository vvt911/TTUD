#include <iostream>
#include <cmath>
using namespace std;

long long F(int n)
{
    long long a = 1, b = 0, temp;
    while (n > 0)
    {
        temp = a;
        a = a + b;
        b = temp;
        n--;
    }
    return b;
}
int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    cout << "So Fibonacci thu n la: " << F(n);
    return 0;
}

// Độ phức tạp thuật toán: O(n)