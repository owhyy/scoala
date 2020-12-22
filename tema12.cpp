#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cout << "Introduceti lungimea vectorului : ";
    cin >> l;
    int M[l];
    for(int i=0; i<l; i++){

        cout<<"M["<<i<<"]";
        cin>>M[i];
    }
//////////////////1///////////////////

    for(int i=0; i < l; i+=2){
        cout << M[i]<< "\t";
    }
    cout << "\n";

//////////////////2///////////////////
    
    int nr =0, produs = 1;
    for(int i=0; i < l; i++){
        if(M[i]<0){
            produs *=M[i];
            nr++;
        }
    }
    cout << "Produsul elementelor negative : "<<produs << endl;
    cout << "Numarul elementelor negative : "<< nr << endl;

//////////////////3///////////////////
    
    int suma = 0;
    for(int i = 1; i < l; i+=2){
        
        if(M[i]>0) suma +=M[i];
                    
    }
    cout << "Suma elementelor pozitive de pe pozitii impare : "<<suma<<endl;

//////////////////A///////////////////

    produs = 1;
    for(int i = 0; i<l; i++)
        if(M[i]%8==0)produs*=M[i];
    cout << "Produsul elementelor divizibile cu 8 : "<< produs<<endl;

//////////////////B///////////////////

    suma = 0; produs = 1;
    long double sr =0;
    for(int i =0; i<l; i++){
        sr = sqrt(M[i]);
        if((sr-floor(sr))==0) suma+=M[i];
    }
    for(int i =0; i<l; i++){
        if(M[i]%3==0)produs*=M[i];
    }
    cout<<"Suma elementelor patrate perfecte : "<<suma<<endl;
    cout<<"Produsul elementelor divizibile cu 3 : "<<produs<<endl;

//////////////////C///////////////////
   
    produs = 1;
    int nrr, i=0, N[100];
    cin>>nrr;
    N[0]=nrr;
    while(cin>>nrr){
        if(nrr==0) break;
        N[i]=nrr;
        i++;
    }
    for(int j =1; j<i; j+=2){
        produs*=N[j];
    } 
     cout << "Produsul elementelor de pe pozitii impare : "<<produs<<endl;

//////////////////D///////////////////

    int nr2, i2=1, minim = 999999, Z[100];
    cin>>nr2;
    Z[0]=nr2;
    if(Z[0]%2==0)minim = Z[0];
    while(nr2>0){

        cin>>nr2;
        Z[i2]=nr2;
        if(Z[i2]%2==0 && Z[i2]>0 && Z[i2]<minim)
            minim = Z[i2];
    }
    cout<<"Elementul minim par : "<<minim<<endl;
}
