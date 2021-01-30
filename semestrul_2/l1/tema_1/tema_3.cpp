#include <iostream>
using namespace std;
int main() {
    int n, j;
    cout << "Introduceti lungimea sirului:";
    cin >> n;
    int V[n];
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < n; i++) {
        if (V[i] == 0) {
            for (int c = i; c < n - 1; c++) V[c] = V[c + 1];
            i--;
            n--;
        }
    }

    for (int i = 1; i < n; i++) {
        j = i;
        while ((j > 0) && (V[j - 1] > V[j])) {
            swap(V[j], V[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++) cout << V[i] << " ";

    return 0;
}
// 3//
