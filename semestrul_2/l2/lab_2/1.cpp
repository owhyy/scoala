#include <iostream>
#include <vector>

using namespace std;
using std::vector;

void Sort_Min(vector<int> v)
{
    for (auto i = 0; i < v.size(); i++)
    {
        auto Min = i;

        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[Min])
                Min = j;
        }
        if (Min != i)
            swap(v[Min], v[i]);
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void Sort_Max(vector<int> v)
{
    for (auto i = 0; i < v.size(); i++)
    {
        auto Max = i;

        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[j] > v[Max])
                Max = j;
        }
        if (Max != i)
            swap(v[Max], v[i]);
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void Sort_Selectie_Cresc(vector<int> v)
{
    for (auto i = 0; i < v.size(); i++)
    {
        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
                swap(v[i], v[j]);
        }
    }
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void Sort_Selectie_Descresc(vector<int> v)
{
    for (auto i = 0; i < v.size(); i++)
    {
        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[i] < v[j])
                swap(v[i], v[j]);
        }
    }
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void Sort_Numarare_Cresc(vector<int> v)
{
    vector<int> b(v.size(), 0);
    vector<int> c = v;
    for (auto i = 0; i < v.size(); i++)
    {
        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[i] < v[j])
                b[j]++;
            else
                b[i]++;
        }
    }
    for (auto i = 0; i < v.size(); i++)
        v[b[i]] = c[i];

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

void Sort_Numarare_Descresc(vector<int> v)
{
    vector<int> b(v.size(), 0);
    vector<int> c = v;
    for (auto i = 0; i < v.size(); i++)
    {
        for (auto j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
                b[j]++;
            else
                b[i]++;
        }
    }
    for (auto i = 0; i < v.size(); i++)
        v[b[i]] = c[i];

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}

int main()

{
    vector<int> v{3, 1, 19, 28, 15};
    Sort_Min(v);
    Sort_Max(v);
    Sort_Numarare_Cresc(v);
    Sort_Numarare_Descresc(v);
    Sort_Selectie_Cresc(v);
    Sort_Selectie_Descresc(v);
}