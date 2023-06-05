#include<stdio.h>

int main(){
	float masa;
	float kecepatan;
	float gravitasi;
	float ketinggian;
	float EP;
	float EK;
	
	printf("Menghitung Energi Potensial dan Energi Kinetik");
	printf("\nMasukkan Masa Benda Tersebut (KG): ");
	scanf("%f",&masa);
	printf("\nMasukkan Kecepatan Benda Tersebut (M/S): ");
	scanf("%f",&kecepatan);
	printf("\nMasukkan Gravitasi Benda Tersebut (M/S^2): ");
	scanf("%f",&gravitasi);
	printf("\nMasukkan Ketinggian Benda Tersebut (M): ");
	scanf("%f",&ketinggian);
	
	
	
	EK=0.5*masa*kecepatan*kecepatan;
	EP=masa*gravitasi*ketinggian;
	
	printf("\nBesar Energi Kinetik Benda Tersebut adalah %2.f J",EK);
	printf("\nBesar Energi Potensial Benda Tersebut adalah %2.f J",EP);
	
	return 0;
}
