#include <iostream>
#include <map>
using namespace std;

map<int, long long> a;
int n;

long long f(int n)
{
	if (n < 3)
		return n;

	auto p = a.find(n);
	if (p != a.end())
		return p->second;

	int k = n / 3;
	long long s = f(2 * k);

	if (n % 3 > 0)
		s += f(2 * k + 1);
	if (n % 3 > 1)
		s += f(2 * k + 2);
	a[n] = s;

	return s;
}

int main()
{
	cout << "Nhap n = ";
	cin >> n;
	cout << "f(" << n << ") = " << f(n);
	return 0;
}
