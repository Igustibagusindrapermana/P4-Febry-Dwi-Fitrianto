#include <iostream>
using namespace std;

main (){
	cout<<" Nama : I Gusti Bagus Indra Permana\n";
	cout<<" NIM : F1B019066\n";
	cout<<" Kelompok : 15 \n";
int x,y, mtrx [5][5];
cout<< "TRANSPOSE MATRIX" <<endl;
cout<< "Masukkan jumlah baris = ";
cin>> x;
cout<< "Masukkan jumlah kolom = ";
cin>> y;
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<< "Masukkan nilai index " <<"["<<i<<"]" << "["<<j<<"]" << " = ";
cin>>mtrx [i][j];
}
}
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<<mtrx [i][j] <<"  ";
}
cout<<endl<<endl;
}
cout<<endl;
for (int i = 0; i< y; i++){
for (int j = 0; j < x; j++){
cout<<mtrx [j][i] <<"  ";
}
cout<<endl<<endl;
}
}
