#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &a, int n)
{
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
}

void sort(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

bool checkForExist(vector<int> a, int num)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == num)
            return true;
    }
    return false;
}

int countArithmeticProgression(vector<int> &a)
{
    sort(a);

    // Đếm số cấp số cộng
    int countAP = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            int numSpace = a[j] - a[i];
            int count = 2;
            int nextNum = a[j] + numSpace;
            for (int k = 0; k < 3; k++)
            {
                if (checkForExist(a, nextNum))
                {
                    count++;
                    if (count == 5)
                    {
                        countAP++;
                        break;
                    }
                    nextNum += numSpace;
                }
                else
                    break;
            }
        }
    }

    return countAP;
}

int main()
{
    vector<int> a;
    int n;
    cin >> n;
    input(a, n);
    cout << countArithmeticProgression(a);
    return 0;
}