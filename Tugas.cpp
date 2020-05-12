#include <iostream>
#include <conio.h>
using namespace std;

int saldo=10000000;
void nama(){
	cout<<" \n NAMA : I GUSTI BAGUS INDRA PERMANA\n NIM : F1B019066\n KELOMPOK : 15\n";
	cout<<"__________________________________________________\n";
	cout<<"Saldo anda :"<<saldo<<"\n";
}
int awal(){
	cout <<"  *** SELAMAT DATANG DI TOKO ORANG BIASA *** \n";
	cout <<"***  Alamat : JL. DR. Soetomo No.4 Mataram NTB ***\n";
	cout <<"     *** No Telepon : (0370) 637208 ***\n";
	cout <<"................................................\n\n";
}
int pesan(){
	cout<<" *** SEMOGA HARI ANDA MENYENANGKAN <3 ***\n #dirumah aja\n\n";
}
int a(){
	cout<<"__________________________________________________\n";
}
int ulasan(){
	int ulasan;
cout<<" Tolong berikan ulasan untuk toko kami (dari 1-5) :";
	cin>> ulasan;
	cout<<"__________________________________________________\n";
	cout<<"*** TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI ***\n";
	
}
main(){
	int kode , harga , i=1 , total_pembelian=0,uang,kembalian;
	char pilih= 'y' ;
	nama();
	cout<<"\n";
	awal();
	cout <<" << Menjual segala jenis sepatu bermerk yang murah dan berkualitas >>\n";
	cout <<"*=======================================================*\n";
	cout <<"|kode|     barang         |     harga     |     stok    |\n";
	cout <<"|=========================================|=============|\n";
	cout <<"|  1 |  Sepatu Adidas     | Rp. 350.000   |     60      |\n";
	cout <<"|  2 |  Sepatu Nike       | Rp. 300.000   |     0       |\n";
	cout <<"|  3 |  Sepatu Bata       | Rp. 180.000   |     29      |\n";
	cout <<"|  4 |  Sepatu Puma       | Rp. 390.000   |     38      |\n";
	cout <<"|  5 |  Sepatu Vans       | Rp. 350.000   |     49      |\n";
	cout <<"|  6 |  Sepatu New Balance| Rp. 275.000   |     56      |\n";
	cout <<"|  7 |  Sepatu Rebook     | Rp. 250.000   |     8       |\n";
	cout <<"|  8 |  Sepatu Converse   | Rp. 350.000   |     6       |\n";
	cout <<"|  9 |  Sepatu Saucony    | Rp. 180.000   |     9       |\n";
	cout <<"| 10 |  Sepatu Skechers   | Rp. 220.000   |     40      |\n";
	cout <<"| 11 |  Sepatu Macbeth    | Rp. 200.000   |     57      |\n";
	cout <<"| 12 |  Sepatu DC         | Rp. 250.000   |     70      |\n";
	cout <<"| 13 |  Sepatu Fila       | Rp. 500.000   |     9       |\n";
	cout <<"| 14 |  Sepatu Air Jordan | Rp. 650.000   |     14      |\n";
	cout <<"| 15 |  Sepatu Yeezy      | Rp. 500.000   |     27      |\n";
	cout <<"| 16 |  Sepatu  Asics     | Rp. 250.000   |     12      |\n";
    cout <<"*=======================================================*\n\n";
	pesan();	

	
while (pilih=='y'){
	cout<<"Masukkan kode barang :";
	cin>> kode;
	fflush (stdin);
	cout<<"\n";
	if (kode==1)	{
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Adidas \n";
	harga= 350000;
	cout<<"1 ="<<harga<<"\n";
	a();
}else if (kode==2){
	a();
	cout<<"Sepatu yang anda pilih adalah : Sepatu Nike\n";
	cout<<" *  MAAF STOK BARANG ANDA SEDANG KOSONG *\n";
	harga=0;
	a();
}else if ( kode == 3){
	a();
	cout<<"Sepatu yang anda pilih adalah : Sepatu Bata\n";
	harga= 180000;
	cout<<"3 = "<< harga<<"\n";
	a();
}else if ( kode == 4){
	a();
	cout<<"Sepatu yang anda pilih adalah : Sepatu Puma\n";
	harga= 390000;
	cout<<"4 = "<<harga<<"\n";
	a();
}else if ( kode == 5){
	cout<<"Sepatu yang anda pilih adalah : Sepatu Vans\n";
	harga= 350000;
	cout<<"5 = "<< harga<<"\n";
}else if ( kode == 6){
	a();
	cout<<"Sepatu yang anda pilih adalah : Sepatu New Balance\n";
	harga= 275000;
	cout<<"6 = "<< harga<<"\n";
	a();
}else if ( kode == 7){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Rebook\n";
	harga= 250000;
	cout<<"7 = "<< harga<<"\n";
	a();
}else if ( kode == 8){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Converse\n";
	harga= 350000;
	cout<<"8 = "<< harga<<"\n";
	a();
}else if ( kode == 9){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Saucony\n";
	harga= 180000;
	cout<<"9 = "<<harga<<"\n";
	a();
}else if ( kode == 10){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Skechers\n";
	harga= 220000;
	cout<<"10 =  "<< harga<<"\n";
	a();
}else if ( kode == 11){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Macbeth\n";
	harga= 200000;
	cout<<"11 = "<< harga<<"\n";
	a();
}else if ( kode == 12){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu DC\n";
	harga= 250000;
	cout<<"12 = "<< harga<<"\n";
	a();
}else if ( kode == 13){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Fila\n";
	harga= 500000;
	cout<<"13 ="<<harga<<"\n";
	a();
}else if ( kode == 14){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Air Jordan\n";
	harga= 650000;
	cout<<"14 = "<< harga<<"\n";
	a();
}else if ( kode == 15){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Yeezy \n";
	harga= 500000;
	cout<<"15 = "<< harga<<"\n";
	a();
}else if ( kode== 16){
	a();
	cout<<" Sepatu yang anda pilih adalah : Sepatu Asics \n";
	harga= 250000;
	cout<<"16 = "<< harga<<"\n";
	a();
}
else{
	cout<<"Sepatu yang anda cari tidak ada !!!!\n ";
	a();
}
total_pembelian=total_pembelian+harga;
cout<<" MAU BELI BARANG LAGI?? [y/t]:";
cin>>pilih;
cout<<"\n";

}
cout<<"................................................\n";
cout<<"................................................\n";
cout<<" Total pembelian anda = "<< total_pembelian<<"\n";

kembalian= saldo - total_pembelian;
cout<<" kembalian anda adalah = "<<kembalian<<"\n"	;
ulasan();
a();

}

