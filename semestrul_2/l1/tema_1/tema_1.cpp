#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Introduceti lungimea sirului:";
    cin >> n;
    int V[n];

    //1//
    for (int i = 0; i < n; i++) cin >> V[i];

    for (int i = 0; i < n-1; i++)
    {
        if (V[i] > V[i + 1]) swap(V[i], V[i + 1]);
    }

    for (int i = 0; i < n; i++) cout << V[i] << " ";
    return 0;
}

