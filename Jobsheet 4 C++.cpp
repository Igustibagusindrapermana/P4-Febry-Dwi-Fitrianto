#include <iostream>
using namespace std;
main(){
	cout<<" Nama : I Gusti Bagus Indra Permana\n";
	cout<<" NIM : F1B019066\n";
	cout<<" Kelompok : 15 \n";
	int i,x;
	int matriks_1[2][2],
	matriks_2[2][2],
	matriks_3[2][2];
	char ulang;	
	{	
	cout<< "Penjumlahan 2 matriks Ordo 2x2 \n\n";
	cout<< "Data matriks 1\n";
	for ( i=0; i<=1; i++ ) 
	{
		for ( x=0; x<=1; x++ ) 
		{ 
		cout<<"Elemen"<<"["<<i<<"]["<<x<<"] : "; 
		cin>>matriks_1[i][x];
		}
	}
	cout<<"\n";
	cout<< "Data matriks 2\n";
	for ( i=0; i<=1; i++ ) 
	{
		for ( x=0; x<=1; x++ ) 
		{ 
		cout<<"Elemen"<<"["<<i<<"]["<<x<<"] : "; 
		cin>>matriks_2[i][x];
		}
	}
	cout<< " \nHasil dari matriks 1 - matriks 2 adalah "<<endl;
	for ( i=0; i<=1; i++ ) { 
	for ( x=0; x<=1; x++ ) {
	matriks_3[i][x]=matriks_1[i][x]-matriks_2[i][x];
	cout<<"\t"<<matriks_3[i][x];
	}	
	cout<<endl;
	}	
}
}
