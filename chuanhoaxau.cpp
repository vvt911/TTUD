#include <iostream>
#include <string>
using namespace std;

string chuanhoa(string &a)
{
	a = " " + a;
	for (int i = 1; i < a.size(); i++)
		a[i] = tolower(a[i]);
	for (int i = 1; i < a.size(); i++)
		if (a[i - 1] == ' ' && a[i] != ' ')
			a[i] = toupper(a[i]);
	while (a[0] == ' ')
		a.erase(0, 1);
	while (a[a.size() - 1] == ' ')
		a.erase(a.size() - 1, 1);
	int i = 0;
	while (i < a.size())
		if (a[i] == ' ' && a[i + 1] == ' ')
			a.erase(i, 1);
		else
			i++;
	return a;
}

void getName(string a)
{
    int index = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == ' '){
            index = i + 1;
            break;
        }
    }

    cout << "\nTen:";
    for (int i = index; i < a.size(); i++){
        cout << a[i];
    }
}

int main()
{
    string a;
    cout << "Nhap xau: ";
    getline(cin, a);
    cout << chuanhoa(a);
    getName(a);
    return 0;
}