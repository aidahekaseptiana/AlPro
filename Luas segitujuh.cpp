#include<stdio.h>

int main(){
	int sisi;
	float luas;
	
	printf("Menghitung Luas Sebuah Bidang datar segitujuh Sama sisi");
	printf("\nMasukkan Panjang Sisi: ");
	scanf("%d",&sisi);
	
	luas = (1.75)*(sisi*sisi)*(2.07784625);
	
	printf("Luas Bidang Datar Segitujuh adalah: %f",luas);
	
	return 0;
}
