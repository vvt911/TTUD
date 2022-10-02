#include <iostream>
#include <string>
using namespace std;

string F(int n)
{
    if (n == 1)
        return "A";
    else if (n == 2)
        return "B";
    else return F(n - 2) + F(n - 1);
}

int main()
{
    int n, m;
    cout << "N = ";
    cin >> n;
    string f = F(n);
    cout << "Chuoi thu " << n << ": " << f;
    
    cout << "\nM = ";
    cin >> m;
    cout << "Tu thu " << m << " cua chuoi thu " << n << ": " << f[m]; 
    return 0;
}