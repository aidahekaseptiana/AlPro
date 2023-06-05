#include<stdio.h>

int main(){

	float bilangan;
	float pangkat;
	
	printf("Menghitung Pangkat 2 Sebuah Bilangan");
	printf("\nMasukkan Bilangan tersebut: ");
	scanf("%f",&bilangan);
		
	pangkat=bilangan*bilangan;
	
	printf("\nHasil Perpangkatan Bilangan Tersebut adalah: %2.f ",pangkat);
	
	return 0;
}
