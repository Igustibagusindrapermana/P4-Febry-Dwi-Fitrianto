#include <stdio.h>
#include <stdlib.h>
int saldo=10000000;
void nama(){
	printf (" \n NAMA : I GUSTI BAGUS INDRA PERMANA\n NIM : F1B019066\n KELOMPOK : 15\n");
	printf("__________________________________________________\n");
	printf("Saldo anda : %d",saldo);
}
int awal(){
	printf ("  *** SELAMAT DATANG DI TOKO ORANG BIASA *** \n");
	printf ("***  Alamat : JL. DR. Soetomo No.4 Mataram NTB ***\n");
	printf ("     *** No Telepon : (0370) 637208 ***\n");
	printf ("................................................\n\n");
}
int pesan(){
	printf(" *** SEMOGA HARI ANDA MENYENANGKAN <3 ***\n #dirumah aja\n\n");
}
int a(){
	printf("__________________________________________________\n");
}
int ulasan(){
	int ulasan;
	printf(" Tolong berikan ulasan untuk toko kami (dari 1-5) :");
	scanf("%d",&ulasan);
	printf("__________________________________________________\n");
	printf("*** TERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI ***\n");
	
}
main(){
	int kode , harga , i=1 , total_pembelian=0,uang,kembalian;
	char pilih= 'y' ;
	nama();
	printf("\n");
	awal();
	printf (" << Menjual segala jenis sepatu bermerk yang murah dan berkualitas >>\n");
	printf ("*=======================================================*\n");
	printf ("|kode|     barang         |     harga     |     stok    |\n");
	printf ("|=========================================|=============|\n");
	printf ("|  1 |  Sepatu Adidas     | Rp. 350.000   |     60      |\n");
	printf ("|  2 |  Sepatu Nike       | Rp. 300.000   |     0       |\n");
	printf ("|  3 |  Sepatu Bata       | Rp. 180.000   |     29      |\n");
	printf ("|  4 |  Sepatu Puma       | Rp. 390.000   |     38      |\n");
	printf ("|  5 |  Sepatu Vans       | Rp. 350.000   |     49      |\n");
	printf ("|  6 |  Sepatu New Balance| Rp. 275.000   |     56      |\n");
	printf ("|  7 |  Sepatu Rebook     | Rp. 250.000   |     8       |\n");
	printf ("|  8 |  Sepatu Converse   | Rp. 350.000   |     6       |\n");
	printf ("|  9 |  Sepatu Saucony    | Rp. 180.000   |     9       |\n");
	printf ("| 10 |  Sepatu Skechers   | Rp. 220.000   |     40      |\n");
	printf ("| 11 |  Sepatu Macbeth    | Rp. 200.000   |     57      |\n");
	printf ("| 12 |  Sepatu DC         | Rp. 250.000   |     70      |\n");
	printf ("| 13 |  Sepatu Fila       | Rp. 500.000   |     9       |\n");
	printf ("| 14 |  Sepatu Air Jordan | Rp. 650.000   |     14      |\n");
	printf ("| 15 |  Sepatu Yeezy      | Rp. 500.000   |     27      |\n");
	printf ("| 16 |  Sepatu  Asics     | Rp. 250.000   |     12      |\n");
    printf ("*=======================================================*\n\n");
	pesan();	

	
while (pilih=='y'){
	printf("Masukkan kode barang :");
	scanf ("%d", &kode);
	fflush (stdin);
	printf("\n");
	if (kode==1)	{
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Adidas \n");
	harga= 350000;
	printf("1 = %d\n ",harga);
	a();
}else if (kode==2){
	a();
	printf("Sepatu yang anda pilih adalah : Sepatu Nike\n");
	printf(" *  MAAF STOK BARANG ANDA SEDANG KOSONG *\n");
	harga=0;
	a();
}else if ( kode == 3){
	a();
	printf("Sepatu yang anda pilih adalah : Sepatu Bata\n");
	harga= 180000;
	printf("3 = %d\n\n ", harga);
	a();
}else if ( kode == 4){
	a();
	printf("Sepatu yang anda pilih adalah : Sepatu Puma\n");
	harga= 390000;
	printf("4 = %d\n\n ", harga);
	a();
}else if ( kode == 5){
	printf("Sepatu yang anda pilih adalah : Sepatu Vans\n");
	harga= 350000;
	printf("5 = %d\n\n ", harga);
}else if ( kode == 6){
	a();
	printf("Sepatu yang anda pilih adalah : Sepatu New Balance\n");
	harga= 275000;
	printf("6 = %d\n\n ", harga);
	a();
}else if ( kode == 7){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Rebook\n");
	harga= 250000;
	printf("7 = %d \n\n", harga);
	a();
}else if ( kode == 8){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Converse\n");
	harga= 350000;
	printf("8 = %d\n\n ", harga);
	a();
}else if ( kode == 9){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Saucony\n");
	harga= 180000;
	printf("9 = %d \n\n", harga);
	a();
}else if ( kode == 10){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Skechers\n");
	harga= 220000;
	printf("10 = %d\n\n ", harga);
	a();
}else if ( kode == 11){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Macbeth\n");
	harga= 200000;
	printf("11 = %d\n\n ", harga);
	a();
}else if ( kode == 12){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu DC\n");
	harga= 250000;
	printf("12 = %d \n\n", harga);
	a();
}else if ( kode == 13){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Fila\n");
	harga= 500000;
	printf("13 = %d\n\n ", harga);
	a();
}else if ( kode == 14){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Air Jordan\n");
	harga= 650000;
	printf("14 = %d \n\n", harga);
	a();
}else if ( kode == 15){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Yeezy \n");
	harga= 500000;
	printf("15 = %d\n\n ", harga);
	a();
}else if ( kode== 16){
	a();
	printf(" Sepatu yang anda pilih adalah : Sepatu Asics \n");
	harga= 250000;
	printf("16 = %d\n\n ", harga);
	a();
}
else{
	printf("Sepatu yang anda cari tidak ada !!!! ");
	a();
}
total_pembelian=total_pembelian+harga;
printf(" MAU BELI BARANG LAGI?? [y/t]:");
scanf("%c", &pilih);
printf("\n");

}
printf("................................................\n");
printf("................................................\n");
printf(" Total pembelian anda = %d\n\n ", total_pembelian);

kembalian= saldo - total_pembelian;
printf(" kembalian anda adalah = %d\n",kembalian);
ulasan();
a();

}
