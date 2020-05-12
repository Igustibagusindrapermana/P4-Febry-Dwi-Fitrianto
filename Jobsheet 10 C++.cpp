 #include <iostream>
using namespace std;

main (){
	cout<<" Nama : I Gusti Bagus Indra Permana\n";
	cout<<" NIM : F1B019066\n";
	cout<<" Kelompok : 15 \n";	

int NIM [1][3][4];
int i, j,k;
for (i = 0; i< 1; i++){
for (j = 0; j <3; j++){
for (k= 0 ; k <4 ; k++)
{
cout<< "NIM [" <<i<<"][" << j << "][" << k <<"]= " ;
cin >> NIM[i][j][k];
}
cout<<endl;
}
}
}
