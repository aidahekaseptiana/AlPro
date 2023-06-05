#include<stdio.h>

int main(){
	int tahunsaatini;
	int lamasatuperiode;
	int waktuselesaikepemimpinan;
	
	printf("Menghitung Selesainya Periode Kepemimpinan");
	printf("\nMasukkan Tahun Saat Ini: ");
	scanf("%d",&tahunsaatini);
	printf("\nMasukkan Lamanya Satu Periode (Dalam Tahun): ");
	scanf("%d",&lamasatuperiode);
	
	waktuselesaikepemimpinan=tahunsaatini+lamasatuperiode;
	
	printf("Berakhirnya Kepemimpinan pemimpin tersebut pada tahun %d",waktuselesaikepemimpinan);
	
	return 0;
}
