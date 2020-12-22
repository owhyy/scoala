#include <iostream>
using namespace std;
int main(){
    int n, m, suma = 0;
    cout<<"Introduceti numarul de linii : ";
    cin >> n;
    cout<<"Introduceti numarul de coloane : ";
    cin >> m;
    int A[n][m];
    long long maxim = -999999999999999;
    for(int i =0; i<n; i++){

    for(int j=0; j<m; j++){
            cout << "A["<<i<<"]""["<<j<<"] = ";
            cin >> A[i][j];
        }
    }

    for(int i =0; i<n; i++){

        for(int j=0; j<m; j++){
           
            if(A[i][j]>=0){

                suma +=A[i][j];
            }
        }
    }
    for(int i = 0; i<n; i++){
        for (int j = 0; j< m; j++){
            if(A[i][j]<0){
                if(maxim<A[i][j]){

                    maxim=A[i][j];
                }
            }
        }
    }     
    if(maxim == -999999999999999) cout << "Nu exista elemente negative in masivul A" << endl;
    else cout << "Maximul elementelor negative din masivul a : "<<maxim<<endl; 
    cout<<"Suma elementelor pozitive din masivul A : "<<suma<<endl;
    return 0;
}
