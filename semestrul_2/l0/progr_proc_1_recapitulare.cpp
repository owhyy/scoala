#include <iostream>
using namespace std;
int main(){

    int l, n, m, suma = 0, L;
    int nr = 0, produs =1;
    cout<<"Introduceti numarul de linii: ";cin>>n;

    cout << "introduceti numarul de coloane: ";
    cin >> m;

    int M[m][n];
    for(int i = 0; i < n; i++)
        for(int j =0; j < m; j++){
            cout<<"M["<<i<<"]["<<j<<"]= ";
            cin>>M[i][j];
        }
         for(int i=0; i<n; i++ )
             for(int j = 0; j<m; j++)
                 if(M[i][j]%2==0){
                    suma+=M[i][j];
                    nr++;
                    produs *=M[i][j];
                 }
    
    cout<<suma<< "\n"<< nr<<"\n"<<produs<<endl;
   
   for(int i =0; i<n; i++)
      for(int j = 0; j < m; j++)
         if(M[i][j]%5==0)
            cout<<M[i][j]<< "  "; 
   
   
    cout<<"introduceti linia L : ";
    cin>>L;
    for(int i=L;i<n;i++)
        for(int j=0; j<m; j++)
            cout<<M[i][j];
// ######

//1
    cout<<"Introduceti lungimea tabloului";
    cin >> l;
    int J[l];
    int minim, maxim;
    for(int i = 0; i< l; i++){

        cin>>J[i];
        maxim=J[0];
        minim=J[0];
    }
    cout<< "Tabloul undiemsional : ";
    for(int i = 0; i < l; i++)
        cout<<J[i]<< " ";
    for(int i = 0; i<l; i++){
        if(J[i]%2!=0){
            produs *=J[i];
            nr++;
        }
    }
    cout<<"\n"<<produs<<" "<< nr<<endl;


    for(int i = 0; i < l; i++){
        if(J[i]<minim)
            minim=J[i];
        else maxim=J[i];
    }
    cout<<"minim : "<<minim<<endl;
    cout<<"maxim :"<<maxim;

    int sumaw=0;
    for(int i = 0; i<l; i++)
    {
        if(i%2==0)
            if(J[i]>0)
                sumaw+=J[i];
    }
    cout<<"\nsuma elemetelor pozitive de pe pozitii pare ;"<<sumaw<<endl;



}

