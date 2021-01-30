#include <iostream>
using namespace std;
int main() {
    int n = 5, k = 2;
    int V[n] = {7, 3, 19, 1, 3};
    for (int i = 0; i < k; i++) {
        if (V[i] > V[i + 1]) swap(V[i], V[i + 1]);
    }
    for (int i = n - k; i < n - 1; i++) {
        if (V[i] < V[i + 1]) swap(V[i], V[i + 1]);
    }
    for (int i = 0; i < n; i++) cout << V[i] << " ";
    return 0;
}


