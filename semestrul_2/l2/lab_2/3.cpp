#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;

int main()
{
    vector<int> a{3, 1, 5, 19, 8, 2};
    int t;
    cin >> t;
    for (auto i = t; i < a.size(); i++)
    {
        for (auto j = i + 1; j < a.size(); j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }

    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}