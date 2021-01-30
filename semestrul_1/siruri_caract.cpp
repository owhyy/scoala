#include<cstring>
#include <iostream>
#include <string>
using namespace std;
int main(){
    char sir[100], sir2[50];
    int k;
    cout<<"Introduceti sir1 : ";
    cin >> sir;
    cout << "Introduceti sir2 : ";
    cin >> sir2;
    k=strcmp(sir, sir2);
    if(k<0) cout << sir2<<" < "<<sir << endl;
    else if(k>0) cout << sir<< " > "<< sir2<<endl; 
    else cout << "Sirurile sunt egale"<<endl;
}
