#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	cout<<" Nama : I Gusti Bagus Indra Permana\n";
	cout<<" NIM : F1B019066\n";
	cout<<" Kelompok : 15 \n";
	int m,n;
	int matriks1[2][2];
	int matriks2[2][2];
	int perkalian[2][2];
	
	cout<<"PERKALIAN MATRIK :"<<endl<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
		cout<<"Masukkan nilai "<<"["<<m<<"]["<<n<<"]"<<" = ";
		cin>>matriks1[m][n];
	}
	}
	cout<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
		cout<<"Masukkan nilai "<<"["<<m<<"]["<<n<<"]"<<" = ";
		cin>>matriks2[m][n];
	}
	}
	cout<<endl<<endl;
	cout<<"Hasil perkalian matirks1 * matriks2 adalah : "<<endl;
	for(m=0;m<2;m++){
	for(n=0;n<2;n++){
	perkalian[m][n]=matriks1[m][n]*matriks2[m][n];
	cout<<perkalian[m][n]<<" ";
	}
	cout<<endl;
	}
	}
