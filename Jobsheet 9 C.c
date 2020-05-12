 #include <stdio.h>
int main()
{
	printf(" Nama : I Gusti Bagus Indra Permana\n");
	printf(" NIM : F1B019066\n");
	printf(" Kelompok : 15 \n");
	
int i;
char nama[10]={'I','N','D','R','A','@'};
char nama2[10]="@INDRA";

printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
