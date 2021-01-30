#include <iostream>
using namespace std;
int main() {
    int x,y,n = 3, m = 4, j;
    int V[n][m] = {{3, 9, 1, 2}, {5, 1, 10, 9}, {7, 2, 9, 5}};
    for (int i = 1; i < m; i++) {
        j = i;
        while (j > 0 && V[0][j] < V[0][j - 1]) {
            swap(V[0][j], V[0][j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << V[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
    }
