#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Introduceti numarul de elemente : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << "Arr = ";
    for(int i=arr[0]; i<arr[n-1]; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}
