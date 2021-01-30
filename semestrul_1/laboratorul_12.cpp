

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
//initializarea masivului
	
	int pare=0, suma=0, nr_elemente;
	
	cout << "Introduceti numarul de elemente : ";
	cin >> nr_elemente;
	int masiv[nr_elemente];
	
		for(int i=0; i<nr_elemente; i++) {
			cout << "Introduceti elementul : ";
			cin >> masiv[i];
			
			
		}
		cout << "Masivul dvs. este : ";
		for(int i=0; i<nr_elemente; i++){
			cout << masiv[i] << "  ";
		}
	cout << "\n###################### CONDITIA 1 ######################"<<endl;

//conditia 1
		for(int i=0; i<nr_elemente; i++){
			
			if(masiv[i]%2==0){
				suma+=masiv[i];
				pare++;
				}
			
			}
	cout << "Suma elementelor pare : "<< suma  << endl
		 << "Numarul de elemente pare : " << pare << endl;
	cout << "###################### CONDITIA 2 ######################"<<endl;

//conditia 2
	int produs = 1, n=0;
	suma = 0;
	double med_aritm = 0;
	
	for(int i=0; i<nr_elemente; i++){
		if(masiv[i]%2!=0){
			n++;
			suma += masiv[i];
			med_aritm = suma/n;
			produs *= masiv[i];
			}
		}
	cout << "Media aritmetica a elementelor de pe pozitii impare : "<< med_aritm << endl
		 << "Produsul elementelor de pe pozitii impare : "<< produs << endl;
	cout << "###################### CONDITIA 3  ######################"<<endl;


//conditia 3
	produs = 1;
	for(int i = 0; i < nr_elemente; i++){
		if(masiv[i]>0){
			produs *= masiv[i];
			}
		}
		
	cout<<"Suma = " << suma << endl << "Produsul = " << produs << endl;
	if(suma > produs){
		cout << "Suma elementelor pare este mai mare ca produsul elementelor pozitive" << endl;
		}
	else if(suma==produs){
		cout << "Suma elementelor pare este egala cu produsul elementelor pozitive" << endl;
		}
	else{
		cout << "Suma elementelor pare este mai mica ca produsul elementelor pozitive" << endl;
		}
	cout << "###################### CONDITIA 4  ######################"<<endl;

//conditia 4
	int max=0;
	for(int i=0; i<nr_elemente; i++){
		if(max<masiv[i]){
			max = masiv[i];
			}
		}
		
	cout << "Max = " << max << endl;
	if(max>0) cout << "Numarul maxim este mai mare ca 0" << endl;
	else 	  cout << "Numarul maxim este mai mic ca 0" << endl;
	cout << "###################### CONDITIA 5  ######################"<<endl;

//conditia 5
	produs = 1, med_aritm = 0; n = 0, suma = 0;
	int dif = 0;
	for(int i = 0; i<nr_elemente; i++){
		produs*=masiv[i];
		n++;
		suma+=masiv[i];
		}
	med_aritm = double(suma)/double(n);
	
	cout<< "Media aritmetica este : " << med_aritm << endl
		<< "Produsul este : " << produs << endl;
	dif = produs - med_aritm;
	cout << "Diferenta este : " << dif << endl;
	if(dif%2==0)cout << "Diferenta este para" << endl;
	else cout << "Diferenta este impara"<<endl;
	cout << "###################### CONDITIA 6 ######################"<<endl;

//conditia 6
	suma = 0, produs = 0;
	for(int i = 0; i<nr_elemente; i++){
		if(masiv[i]>0){
			suma += masiv[i];
			produs *=masiv[i];
			}
		}
	cout << "Suma elementelor pozitive : " << suma << endl;
	cout << "Produsul elemtelor pozitive : " << produs << endl;
	cout << "###################### CONDITIA 7  ######################"<<endl;

//conditia 7
	n=0, med_aritm = 0, suma = 0;
	for(int i = 0; i<nr_elemente; i++){
		if(masiv[i]/3==0){
			n++;
			suma+=masiv[i];
			med_aritm=double(suma)/double(n);
			}
		}
	cout << "Media aritmetica a	elementelor divizibile la 3 : " << med_aritm << endl;
	cout << "Numarul elementelor divizibile la 3 : " << n << endl;
	cout << "###################### CONDITIA 8  ######################"<<endl;

//conditia 8
	int suma_pare = 0, suma_impare = 0;
	produs = 1;
	for(int i=0; i<nr_elemente; i++){
		if(masiv[i]%2==0){
			suma_pare += masiv[i];
			}
		else{
			suma_impare +=masiv[i];
			}
		}
	produs = suma_pare*suma_impare;
	cout << "Produsul sumelor elementelor pare si impare : " << produs << endl;
	cout << "###################### CONDITIA 9  ######################"<<endl;

//conditia 9
	produs = 1, n = 0;
	for(int i=0;i<nr_elemente; i++){
		if(masiv[i]%2==0){
			n++;
			}
		}
	produs=suma_pare*n;
	cout << "Produsul dintre elementele divizibile la 2 si numarul acestora : " << produs << endl;
	cout << "###################### CONDITIA 10  ######################"<<endl;

//conditia 10
	med_aritm=0; n=0, suma=0;
	for(int i=0;i<(nr_elemente/4)*3; i++){
		if(masiv[i]/2!=0){
			n++;
			suma+=masiv[i];
			med_aritm = double(suma)/double(n);
			}
		} 
	cout << "Media arimtetica a elementelor impare din prima 3/4 din masiv : " << med_aritm << endl;
	cout << "###################### CONDITIA 11  ######################"<<endl;

//conditia 11
	suma = 0;
	int ult_elem = 0, x = nr_elemente-1;
	for(int i = 0; i<nr_elemente; i++) {
		while(masiv[x]%2==0){
			x-=1;
			if (masiv[x]%2 !=0) {
				ult_elem = masiv[x]; break;
			}
		}
	}
	suma+=masiv[0] + ult_elem;
	cout << "Suma dintre primul numar al masivului si ultimul element par : " << suma << endl;
	cout << "###################### CONDITIA 12  ######################"<<endl;

//conditia 12
	suma = 0, n=0;
	for(int i=0; i<nr_elemente/2; i++) {
		if(masiv[i]<0){
			n++;
			suma+=masiv[i];
		}
		
	}
	cout << "Numarul de elemente negative : " << n << endl;
	cout << "Suma elementelor negative " << suma << endl;
	cout << "###################### CONDITIA 13  ######################"<<endl;

//conditia 13
	n=0;
	for(int i=0; i<nr_elemente; i++){
		if(masiv[i]>0){
			if(masiv[i]%2!=0) n++;
			}
		}
	cout << "Numarul de elemente impare printre elementele pozitive ale masivului : " << n << endl;
	cout << "###################### CONDITIA 14  ######################"<<endl;

//conditia 14
	int s2=0;
	suma = 0, n = 0, med_aritm = 0;
		for(int i =0; i<nr_elemente; i++){
			if(i<nr_elemente/2){
			suma+=masiv[i];
			}
			else {
				n++;
				s2+=masiv[i];
				med_aritm=double(s2)/double(n);
			}
		}
	cout << "Media aritmetica a elementelor din a doua jumatate a masivului : " <<med_aritm << endl;
	cout << "Suma elementelor din prima jumatate a masivului : "<<suma << endl;
	if(suma>med_aritm) cout << "Suma elementelor din prima jumatate a masivului este mai mare\nca media aritmetica a elementelor din a doua jumatate a masivului" << endl;
	else cout << "Suma elementelor din prima jumatate a masivului este mai mica\nca media aritmetica a elementelor din a doua jumatate a masivului" << endl;
	cout << "###################### CONDITIA 15  ######################"<<endl;
	
//conditia 15
	int min=masiv[0];
	for(int i = 0; i<nr_elemente; i++) {
		if(masiv[i]%2==0){
			if(min>masiv[i]){
				min = masiv[i];
				}
			}
		}
	cout << "Elementul minimal printre elementele cu pozitii pare ale masivului : " << min << endl;
	cout << "###################### CONDITIA 16  ######################"<<endl;

//condiita 16
	int masiv2[nr_elemente-1];
	suma_pare=0, produs =1;
		for(int i = 1; i<nr_elemente-1; i++){
			if(masiv[i]%2==0){
				suma_pare+=masiv[i];
				}
			if(masiv[i]<0){
				produs*=masiv[i];
				}
			}
	cout<<"Suma elementelor pare in afara de primul si ultimul element : "<<suma_pare << endl;
	cout<<"Produsul elelmentelor negative in afara de primul si ultimul element : " <<  produs << endl;
	if(suma_pare>produs) cout << "Suma elementelor este mai mare ca produsul" << endl;
	else cout <<"Produsul elementelor negative este mai mare ca suma" << endl;
}

	
