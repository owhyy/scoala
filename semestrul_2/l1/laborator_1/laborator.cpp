#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, ok;
    cin >> n;
    int A[n];
    for (int i = 0;  i < n; i++){
        cin>>A[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[j] < A[j + 1]) swap(A[j], A[j + 1]);
            ok = 1;
        }
    if (ok == 0) break;
    }
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    
    cout<<"\n";

    for(int i = 0; i<n; i++){
        if(A[i]==0){
            for (int j = i; j < (n - 1); j++) A[j] = A[j + 1];
            i--;
            n--;
        }
    }

    int temp, j;
    for  (int i = 1; i < n; i++) {
        temp = A[i];
        j = i - 1;
        while ((j >= 0) && (A[j] > temp)) {
                A[j + 1] = A[j];
                j--;
        }
        A[j + 1] = temp;
    }

    for (int i = 0; i < n; i++) cout << A[i] << " ";

    int maxim=A[0], minim=A[0];
    for(int i =0; i<n; i++){
        if (A[i] > maxim) maxim = A[i];
        if (A[i] < minim) minim = A[i];
    }
    cout << "\n" << maxim << ' ' << minim << endl;
    for (int i = minim; i < maxim; i++) {
        temp = A[i];
        j = i - 1;
        while ((j >= 0) && (A[j] > temp)) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
    cout << "\n";
    for (int i = 0; i < n; i++) cout << A[i] << " ";
}

