
#include<iostream>
using namespace std;

int main()
{
	int l, c, suma=0, produs=1;
	
	cout<<" Introdu nr de linii, l= "; cin>>l;
	cout<<" Introdu nr de coloane, c= "; cin>>c;
	
	int M[l][c];
//definirea matricei
	for(int i=0; i<l;i++){
		
		for (int j=0;j<c; j++)
		{
			cout<<"M["<<i<<"]["<<j<<"]= ";  
			cin>>M[i][j];
		}
	}
	cout << "##############SARCINA 1##############" << endl;
//sarcina 1
	for (int i=0; i<l; i++){
		
		for (int j=0; j<c; j++){
				
			if(M[i][j]%2!=0){
				suma += M[i][j];
				produs*=M[i][j];
			}
		}
	}
	
	cout << "Suma = "<<suma << endl;
	cout << "Produs = " << produs << endl;
	cout << "##############SARCINA 2##############"<<endl;
//sarcina 2
	suma=0;
	int med_aritm =0, nr = 0;
	for(int i=l/2; i<l; i++){
		
		for(int j=c/2; j<c; j++){
			
		   nr++;
           suma +=M[i][j];
    	}
    }
    med_aritm += suma/nr;
    cout << "Media aritmetica : "<<med_aritm << endl;
	cout << "##############SARCINA 3##############"<<endl;


//sarcina 3
	produs = 1;
	for(int i =2; i<3; i++){
		
		for(int j=0; j<c; j++){
			
			if(M[i][j]%2==0){

                produs*=M[i][j];
            }
        }
    }
    cout<<"Produsul : "<< produs << endl;
	cout << "##############SARCINA 4##############"<<endl;
	
//sarcina 4
	suma = 0;
	for(int i = 0; i<l; i++){
		
		for(int j = 1; j<2; j++){
			
			if(M[i][2]%2!=0){
				
				suma +=M[i][2];
			}
		}
	}
	cout << "Suma elementelor impare de pe randul 3 : "<<suma << endl;
	cout << "##############SARCINA 5##############"<<endl;

//sarcina 5
	suma = 0;
	int suma2=0, dif = 0;
	for(int i = 0; i<1; i++){
		
		for(int j=0; j<c; j++){
			
			suma += M[i][j];
		}
	}
	for(int i = 1; i<2; i++){
		
		for(int j=0; j<c; j++){
			
			suma2+=M[i][j];
		}
	}
	dif=suma-suma2;
	cout << "Diferenta dintre elementele din primul rand si elementele din randul 2 este : " << dif << endl;
	cout << "##############SARCINA 6##############"<<endl;

//sarcina 6
	nr =0;
	for(int i = l-3; i<l; i++){
		
		for(int j = 0; j<c; j++){
			
			if(M[i][j]>0) nr++;
		}
	}
	cout << "Numarul de elemente pozitive de pe ultimele 3 randuri ale masivului : "<<nr << endl;
	cout << "##############SARCINA 7##############"<<endl;

//sarcina 7
    nr = 0, suma = 0;
    for(int i=0; i<l; i++){
        suma +=M[i][0]+M[i][c-1];
            for(int j = M[i][0]; j<M[i][c-1]; j++){
                nr++;
            } 
        }
    cout<<"Suma : "<<suma<<endl;
    cout << "Numarul elementelor de pe prima si ultima coloana : "<< nr<<endl;
	cout << "##############SARCINA 8##############"<<endl;

//sarcina 8
	produs=1;
	for(int i=l/2; i<l; i++){
		
		for(int j=0; j<l/2; j++){
            
            if(M[i][j]%2==0){

             produs*=M[i][j];   
            }
        }
    }
    cout << "Produs = "<< produs << endl;

    
	cout << "##############SARCINA 9##############"<<endl;

//sarcina 9
    nr = 0;
    suma = 0;
    for(int i = 0; i<1; i++){
        
        for(int j =c-1; i<c; i++){

            nr++;
            suma+=M[i][c];
        }
    med_aritm = suma/nr;
    }
    cout << "Media aritmetica : "<<med_aritm << endl;

	cout << "##############SARCINA 10##############"<<endl;

//sarcina 10
    nr =0;
    int nr1_1 = 0;
    for(int i = l-1 ; i<l; i++){

        for(int j=0; j<c; j++){

            if(M[i][j]%2!=0) nr++;
            if(M[1][1]%2!=0) nr1_1++;
        }
    }
        
    if(nr1_1 > nr) cout << "Numarul elementelor din N[1][1] este mai mare ca cel din M[l][c]" << endl;
    else if(nr1_1==nr) cout << "Numarul elementelor sunt egale"<< endl;
    else cout << "Numarul elementelor din M[l][c] este mai mare ca N[1][1]" << endl;


	cout << "##############SARCINA 11##############"<<endl;

//sarcina 11
    suma = 0; nr = 0;
    for(int i =l-4; i>l; i++){
        for(int j = 0; j<c; j++){

            if(M[i][j]<0) nr++;
        }
    }
    cout << "Numarul de elemente negative de mai sus de randul 4 : " << nr << endl;


	cout << "##############SARCINA 12##############"<<endl;
    
//sarcina 12
    produs = 1;
    for(int i =0; i<l; i++){
        for(int j = 2; j<c; j++){
        produs *= M[i][j];
        }
    }
    if(produs > M[3][3]) cout << "Produsul e mai mare decat elementul de pe pozitia M[3][3]" << endl;
    else if(produs == M[3][3]) cout << "Produsul e egal cu elementul de pe pozitia M[3][3]" << endl;
    else cout << "Produsul e mai mic decat elementul de pe pozitia M[3][3]" << endl;

	cout << "##############SARCINA 13##############"<<endl;

//sarcina 13
    suma = 0; nr = 0;
    for(int i =0; i<l/2; i++){
        for(int j =c/2; j<c; j++){
            if(M[i][j]>0){
                nr++;
                suma +=M[i][j];
            }
        }
    }
    cout << "Suma elementelor : " << suma << endl;
    cout << "Numarul de elemente : "<< nr << endl;

	cout << "##############SARCINA 14##############"<<endl;

//sarcina 14
    int diff = 0; 
    produs = 1; med_aritm = 0; suma =0; nr = 0;
    for(int i = 0; i<l; i++){
        for(int j = 0; j<c; j++){
            if(M[i][j]>0){
                produs *=M[i][j];
            }
        }
    }
    for(int i =0; i<4; i++){
        for(int j = 0; j<c; j++){

            nr++;
            suma +=M[i][j];

        }
    }
    med_aritm = suma/nr;
    diff = produs - med_aritm;

    cout << "Diferenta dintre produs si media aritmetica : " << diff << endl;

   	cout << "##############SARCINA 15##############"<<endl;

//sarcina 15
    nr = 0; suma = 0;
    for(int i =l-3; i<l; i++){
        if(i%2==0){
            for(int j=0; j<c; j++){
                nr++;
                suma+=M[i][j];
            }
        }
    }
    cout << "Suma elementelor cu pozitii pare de pe ultimele doua coloane : "<<suma << endl;
    cout << "Cantitatea elementelor cu pozitii pare de pe ultimele 2 coloane : "<< nr << endl;

	cout << "##############SARCINA 16##############"<<endl;

//sarcina 16
    nr =0;
    for(int i =0; i<l; i++){

        for(int j = c-3; j<c; j++){

            if(M[i][j]%3==0){
                nr++;
            }
        }
    }
    cout << "Cantitatea elementelor divizibile la 3 este "<< nr << " elemente"<< endl;



}


	
