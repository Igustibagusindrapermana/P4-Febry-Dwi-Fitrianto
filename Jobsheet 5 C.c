#include <stdio.h>
#include <conio.h>

main (){
	printf(" Nama : I Gusti Bagus Indra Permana\n");
	printf(" NIM : F1B019066\n");
	printf(" Kelompok : 15 \n");
	
int matriks1 [2][2];
int matriks2 [2][2];
int hasil [2][2];
int i, j;
printf ("PERKALIAN MATRIK\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai  [%d] [%d] = ", i, j);
scanf ("%d", &matriks1[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai [%d] [%d]= ", i, j);
scanf ("%d", &matriks2[i][j]);
}
}
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=matriks1[i][0]*matriks2[0][j]+matriks1[i][1]*matriks2[1][j];
printf (" %d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
