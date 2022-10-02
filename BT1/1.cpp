#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
void Tinh(int a, int b)
{
	int c = pow(a, b);
	if (c > 999999999)
	{
		stringstream ss;
		ss << c;
		string s;
		ss >> s;
		cout << "Ket qua: " << s.substr(1, 9);
	}
	else
		cout << "Ket qua:" << c;
}
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	Tinh(a, b);
	return 0;
}