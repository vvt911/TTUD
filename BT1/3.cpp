#include <iostream>
#include <vector>
using namespace std;

void findMinK(vector<int> &a, int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int min = a[i];
        int pos = i; // Vị trí số nhỏ nhất trong dãy từ i+1 trở đi

        // Bắt đầu tìm số nhỏ nhất để đưa vào vị trí i trong dãy
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] <= min)
            {
                min = a[j];
                pos = j;
            }
        }
        // Nếu i = k-1 thì ta đã có kết quả là min
        if (i == k - 1)
            cout << "So nho thu "<< k << " la: " << min;
        else
        {
            // Ngược lại đổi chỗ a[i] với a[pos], trong đó a[pos] == min
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }
}

int main()
{
    vector<int> a;
    int n;
    cout << "Nhap n = ";
    cin >> n;

    cout << "Nhap mang co " << n << " phan tu:" << endl;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    int k;
    cout << "Nhap K = ";
    cin >> k;

    findMinK(a, n, k);
    return 0;
}

// Độ phức tạp thuật toán O(N^2)