#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n < 0)
	{
		cin >> n;
	}
	int a[n];
	int temp = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
    
	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++)
	{
		if (temp <= a[i])
		{
			temp++;
		}
	}
	cout << temp;
	return 0;
}