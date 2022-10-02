#include <iostream>
#include <vector>
using namespace std;

void input_array(vector<int> &a)
{
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < a.size(); i++)
        cin >> a[i];
}

// return index
int index_max_array(const vector<int> &a)
{
    int index = 0;
    for (int i = 1; i < a.size(); i++)
        if (a[index] < a[i]) index = i;
    return index;
}

int stack_bricks(vector<int> a)
{
    if (a.empty())
        return 0;
    
    int height = 1;

    int index_max = index_max_array(a);
    int max_capacity = a[index_max];

    a.erase(a.begin() + index_max, a.begin() + index_max + 1);

    while (max_capacity > 0 && a.size() > 0)
    {
        max_capacity--;
        height++;

        int index_next_bricks_max = index_max_array(a);
        int capacity = a[index_next_bricks_max];

        a.erase(a.begin() + index_next_bricks_max, a.begin() + index_next_bricks_max + 1);

        if (capacity < max_capacity)
            max_capacity = capacity;

    }

    return height;
}

int main()
{
    vector<int> a;
    input_array(a);
    cout << stack_bricks(a);
    return 0;
}