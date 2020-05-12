#include <iostream>
using namespace std;
int main()
{
	cout<<" Nama : I Gusti Bagus Indra Permana\n";
	cout<<" NIM : F1B019066\n";
	cout<<" Kelompok : 15 \n";
	
	int i;
	char nama[10]={'I','N','D','R','A','@'};
	char nama2[10]="@INDRA";
	cout<<"Array per karakter = ";
	for(i=0;i<5;i++)
	{
		cout<<nama[i]<<",";
		
	}
	cout<<endl;
	cout<<"Array string = "<<nama2<<endl<<endl;
}
