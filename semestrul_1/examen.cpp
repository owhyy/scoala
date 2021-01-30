#include <iostream>
using namespace std;
int main(){
    
    int n, k = 0;
    cout<<"Introduceti numarul de elemente ale tabloului A : "; cin >> n;
    int A[n] ;
    
    for(int i = 0; i < n; i++)
    {
        cout<<"A["<<i<<"] = "; cin >> A[i];
    }
    cout<<"Tabloul A : ";
    
    for(int i = 0; i<n; i++) cout<<A[i] << " ";
    
    for(int i = 0; i<n; i++)
        if(A[i]>0) k++;

    int C[k];
    for(int i=0; i<k; i++)
    {
        if(A[i]>0){
            C[i]=A[i];
        }
    }
    cout<<"\nElementele masivului C : ";
    for(int i = 0; i < k; i++) cout<<C[i]<< " ";
    return 0;
}
