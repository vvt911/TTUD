#include <iostream>
#include <map>
using namespace std;
map<int, int> hm;
map<int, int>::iterator it;

int sum_of_elements(int a[], int i, int j)
{
    int sum = 0;
    for (int index = i; index < i + j; index++)
        sum += a[index];
    return sum;
}
void count_subarray(int a[], int n, int k)
{
    for (int j = 1; j <= n; j++)
        for (int i = 0; i < n - j + 1; i++)
            hm[sum_of_elements(a, i, j)]++;
    for (it = hm.begin(); it != hm.end(); it++)
        if (it->first == k)
            cout << it->second;
}
int main()
{

    int n, k;
    cout << "Nhap m = "; cin >> k;
    cout << "Nhap n = "; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Co tat ca ";
    count_subarray(a, n, k);
    cout << " cach phan tich.";

    return 0;
}