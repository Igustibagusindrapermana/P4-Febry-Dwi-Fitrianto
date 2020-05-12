#include<stdio.h>
using namespace std;
main(){
	printf(" Nama : I Gusti Bagus Indra Permana\n");
	printf(" NIM : F1B019066\n");
	printf(" Kelompok : 15 \n");
	
	int matriks1 [2][2], matriks2 [2][2], i, j;
	printf ("Matriks 1\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
		printf ("Elemen [%d][%d] : ", i, j);
		scanf ("%d", &matriks1 [i][j]);
		}
	}
	printf ("\nMatriks 2\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++){
		printf ("Elemen [%d][%d] : ", i, j);
		scanf ("%d", &matriks2 [i][j]);
		}
	}
	printf ("\nHasil pengurangan matriks1 - matriks2 adalah \n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 1; j++)
		printf ("%d\t", matriks1 [i][j] - matriks2 [i][j]);
		printf ("\n");
	}
}

