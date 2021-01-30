#include <cmath>
#include <iostream>
#include <string>

using namespace std;
int main() {
    int n = 5, temp, j;
    int A[n] = {5, 1, 19, 11, 39};

    for (int i = 1; i < n; i++) {
        temp=A[i];
        j=i-1;
        while ((j >= 0) && (A[j] < temp)) {
            A[j + 1] = A[j];
            j--;
        }
            A[j + 1] = temp;
    }
    for (int i = 0; i < n; i++) cout << A[i] << " ";
}

