#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 5;
    int A[n] = {5, 3, 19, 1, 2};
    int ok;
    for (int i = 0; i < n - 1; i++) {
        ok = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                ok = 1;
            }
        }
        if (ok = 0) break;
    }
        for (int i = 0; i < n; i++) cout << A[i] << " ";
    }
